#include <bits/stdc++.h>

using namespace std;

int result =-10000000,n,k;
int s[100000];
int num;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin >> n >> k;

    for(int i=1; i<=n; i++){
        cin >> num;
        s[i] = s[i-1] + num;
    }

    for(int i = k; i<=n; i++){
        result = max(result,s[i] - s[i-k]);
    }
   
    cout << result;
    return 0;
}