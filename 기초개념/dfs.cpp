#include <bits/stdc++.h>

using namespace std;

int m,n, cnt;
int dy[] = {-1,0,1,0};
int dx[] = {0,1,0,-1};
int vi[100][100], k[100][100];

void go(int y, int x){
    vi[y][x] = 1;

    for(int i=0; i<4; i++){
        int diy = dy[i] + y;
        int dix = dx[i] + x;

        if(diy >= n || diy < 0 || dix >= m || dix < 0) continue;
        if(vi[diy][dix] == 0 && k[diy][dix] == 1) continue;
        go(diy,dix);
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin >> n >> m;

    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            cin >> k[i][j];
        }
    }

    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            if(vi[i][j] != 0 && k[i][j] == 1){
                cnt++;
                go(i,j);
            };
        }
    }

    go(0,0);
    cout << cnt;
}