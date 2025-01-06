#include <bits/stdc++.h>

using namespace std;

int m,n,j,r,cnt;
int a, b[20][2];
int x[2] = {-1,1};

int main(){
    ios_base::sync_with_stdio(false);
    cout.tie(NULL); cin.tie(NULL);

    cin >> m >> n >> j;
    int l=1;

    for(int i=0; i< j; i++){
        r = l+m-1;
        cin >> a;

        if(l<=a &&a<=r) continue;
        else{
            if(a > r){
                l += (a - r);
                cnt += (a - r);
            }else{
                cnt += (l - a);
                l = a; 
            }
        }

    }
    cout << cnt;
}