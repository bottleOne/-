#include <bits/stdc++.h>

using namespace std;

int n,m,a,b,mx;
vector<int> v[10000];
int vi[10000], di[10000];
int dfs(int here){
    vi[here] = 1;
    int ret = 1;
    for(int there : v[here]){
       if(vi[there]) continue;
       
       ret += dfs(there); 
    }
    
    return ret;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin >> n >> m;

    for(int i=0; i<m; i++){
        cin >> a >> b;
        v[b].push_back(a);
    }

    for(int i=1; i<=n; i++){
        memset(vi,0,sizeof(vi));
        di[i] = dfs(i);
        mx = max(di[i], mx);
    }

    for(int i=1; i<=n; i++) if(di[i] == mx) cout << i << " "; 
    
}