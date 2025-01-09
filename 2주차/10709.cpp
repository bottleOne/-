#include <bits/stdc++.h>

using namespace std;
char c;
string s;
int h,w,r[104][104];

/*void go (int a, int b, int n){
    if(r[a][b] != 0)r[a][b] = n;

    for(int i=b; i<w;i++){
        int dx = b+1;
        if(dx>=w) break;
        if(r[a][dx]==0)break;
        go(a ,dx, n+1);
    }
}*/

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin >> h >> w;

    for(int i=0; i < h; i++){
        cin >> s;
        for(int j=0; j<w; j++){
            if(s[j] == 'c') r[i][j] = 0;
            else r[i][j] = -1;
        }
    }

    for(int i=0; i < h; i++){
        for(int j=0; j<w; j++){
            //재귀,,,시간초과
            //if(r[i][j] == 0) go(i,j+1,1);
            if(r[i][j] == 0){
                int prev =1;
                while (r[i][j+1] == -1)
                {
                    r[i][j+1] = prev++;
                    //prev++;
                    j++;
                }
                
            }
        }
    }

    for(int i=0; i < h; i++){
        for(int j=0; j<w; j++){
           cout << r[i][j] << " " ;
        }
        cout << "\n";
    }
}