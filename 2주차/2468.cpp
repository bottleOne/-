#include <bits/stdc++.h>

using namespace std;

int n,count;
int a[101][101],diy,dix,result=1;
bool vi[101][101];
int dy[] = {-1,0,1,0};
int dx[] = {0,1,0,-1};


void go(int y, int x, int d){
    vi[y][x] = 1;

    for(int i=0; i<4; i++){
        diy = y + dy[i];
        dix = x + dx[i];

        if(dix < 0 || dix >= n || diy < 0 || diy >= n) continue;
        if(!vi[diy][dix] && a[diy][dix] > d)  go(diy, dix, d);
    }
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin >> n;

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> a[i][j];
        }
    }

    for(int d = 1; d < 101; d++){
        fill(&vi[0][0], &vi[0][0] + 101 * 101, 0);
        int cnt = 0;
       
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(a[i][j] > d && !vi[i][j]){
                    
                    go(i,j, d);
                    cnt++;
                }
            }
        }
       result = max(result,cnt);
        cout << "c : " << cnt << "\n"; 
    }
    

    cout << result;
}