#include <bits/stdc++.h>

using namespace std;

int result =-10000000,n,k,r;
int p[100000];
int s[100000];
int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin >> n >> k;

    

    for(int i=1; i<=n; i++){
        cin >> p[i];
        s[i] = s[i-1] + p[i];

        if(i != n){
            if(i>=k){
                r = s[i] - s[i-k];
                if(result<r){
                    result = r;
                } 
            }
        } 
    }

    cout << result;
    return 0;
}