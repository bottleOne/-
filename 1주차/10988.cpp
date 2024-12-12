#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    string o,t;

    cin >> t;
    o = t;
    reverse(t.begin(), t.end());

    if(t==o) cout << 1;
    else cout <<0;
}