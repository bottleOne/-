#include <bits/stdc++.h>

using namespace std;

int n,m,r=0;
int s[15001];

void combi(int st, vector<int> &v){
    if(v.size()==2){
       if(m ==s[v[0]]+s[v[1]]) r++;
       return;
    }

    for(int i= st+1; i<n;i++){
        v.push_back(i);
        combi(i,v);
        v.pop_back();
    }
}

int main(){
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin >> n;
    cin >> m;

    for(int i =0; i<n;i++){
        cin >> s[i];
    }

    vector<int> v;
    combi(-1, v);
    
    cout << r;
}