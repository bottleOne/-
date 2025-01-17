#include <bits/stdc++.h>

using namespace std;

int n,v,d,root,cnt;
vector<int> t[50];

int go(int here){
    int ret = 0;
    int child = 0;
    for(int there: t[here]){
        if(there == d) continue;
        ret += go(there);
        child++;
    }
    if(child == 0) return 1;
    return ret;
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin >> n;

    for(int i=0; i<n; i++){
        cin >> v;
        if(v ==-1) root = i;
        else t[v].push_back(i);
    }

    cin >> d;
    if(d == root){
        cout << 0 << "\n";
        return 0;
    }
    cout << go(root) << "\n";
}