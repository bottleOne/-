#include <bits/stdc++.h>

using namespace std;

int n,c,k=0,a[1000];
vector<pair<int,int>> v;
map<int,int> m,cm;

bool cmp(pair<int, int> a, pair<int, int> b){
    if(a.first == b.first){
        return cm[a.second] < cm[b.second];
    }
    return a.first > b.first;
}

int main(){
    ios_base::sync_with_stdio(false);
    cout.tie(NULL); cin.tie(NULL);

   cin >> n >> c;

   for(int i=0; i<n; i++){
        cin >> a[i]; m[a[i]]++;
        if(cm[a[i]]==0) cm[a[i]] = i+1;
   }

   for(auto a: m) v.push_back({a.second, a.first});
   
    sort(v.begin(), v.end(), cmp);
    for(auto aa: v) {
        for(int i=0; i<aa.first;i++){
            cout << aa.second << " ";
        }
    };
}