#include <bits/stdc++.h>

using namespace std;

int n,m;
string s,a;
map<string,int> m1;
map<int,string> m2;

int main(){

 ios_base::sync_with_stdio(false);
 cin.tie(NULL); cout.tie(NULL);

 cin >> n >> m;

 for(int i = 0; i<n; i++){

    cin >> s;
    m1[s] = i+1;
    m2[i+1] = s; 

 }

 for(int i =0; i < m; i++){
    cin >> a;
    if(atoi(a.c_str()) == 0){
        cout << m1[a] << '\n';
    }else{
        cout << m2[atoi(a.c_str())] << '\n';
    }
 }
}