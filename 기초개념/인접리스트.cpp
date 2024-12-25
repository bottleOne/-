#include <bits/stdc++.h>

using namespace std;

const int s=10;
vector<int> v[s];
int vi[s];

void go(int x){
    vi[x] = 1;
    cout << x;

    for(int i = 0; i < s; i++){
        if(vi[i]) continue;
        if(v[i].size()>0) go(i);
    }
}

int main(){

    v[1].push_back(2); v[2].push_back(1);
    v[1].push_back(3); v[3].push_back(1);
    v[3].push_back(4); v[4].push_back(3);

    for(int i = 0; i < s; i++){
        if(vi[i]==0 && v[i].size()>0) go(i);
    }
}