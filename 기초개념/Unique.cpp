#include <bits/stdc++.h>

using namespace std;

int unique(){
    vector<int> v3 = {2,2,3,3,5,5,6,4,6,6,6,1,4,7,8,8,9,9};

    sort(v3.begin(), v3.end());
    v3.erase(unique(v3.begin(), v3.end()), v3.end());

    for(int i : v3) cout << i << " ";
    return 0;
}

int main(){
    vector<int> v1 = {1, 1, 2, 2, 3, 3};
    map<int, int> m;
    for(int a : v1){
        if(m[a]){
            continue;
        }else{
            m[a] = 1;
        }
    }
    vector<int> v2;
    for(auto aa : m){
        v2.push_back(aa.first);
    }

    for(int i : v2)cout << i << " ";
   cout << "\n";
   cout << "-----unique------" << "\n";
   unique();
}
