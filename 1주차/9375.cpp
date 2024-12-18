#include <bits/stdc++.h>

using namespace std;

int n,k;
string a,b;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> n;
 

    while(n--){

         map<string, int> m;
        cin >> k;
        for(int i = 0; i<k ;i++){
            cin >> a >> b;
            m[b]++;
        }

        long long r = 1;
        for(auto c : m){
            r *= ((long long)c.second+1);
        }
        r--;
        cout << r <<'\n';
    }
}