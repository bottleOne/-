#include <bits/stdc++.h>

using namespace std;
int n;
string ret,a;
int s[26];

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> n;

    for(int i = 0; i< n;i++){
        cin >> a;
        s[a[0]-'a']++;
    }

    for(int i = 0;i<26; i++){
        if(s[i]>=5)ret += i+'a';
        
    }
    if(ret.size()) cout << ret;
    else cout << "PREDAJA";
}