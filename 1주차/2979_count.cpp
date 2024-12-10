#include <bits/stdc++.h>

using namespace std;

int A,B,C,d,e,sum=0;
int cnt[100];
int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin >> A >> B >> C;

    for(int i= 0; i < 3; i++){

        cin >> d >> e ;

        for(int j = d; j < e; j++) cnt[j]++; 
    }

    for(int i = 0; i < 100;i++){
            if(cnt[i] == 1) sum += A*cnt[i];
            else if(cnt[i] == 2)sum += B*cnt[i];
            else sum += C*cnt[i]; 
    }

    cout << sum;
}