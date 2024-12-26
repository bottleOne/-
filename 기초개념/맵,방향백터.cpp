#include <bits/stdc++.h>

using namespace std;

int dy[] = {-1,0,1,0};
int dx[] = {0,1,0,-1};
int a[3][3], vi[3][3];

void go(int y, int x){
    vi[y][x] = 1;
    cout << y << " : " << x << "\n";

    for(int i=0; i<4; i++){
        int diy = y + dy[i];
        int dix = x + dx[i];

        if(dix<0 || dix >= 3 || diy<0 || diy >= 3)continue;
        if(vi[diy][dix]) continue;
        if(a[diy][dix] == 0) continue;
        go(diy, dix);
    }
}

int main(){

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cin >> a[i][j];
        }
    }
    go(0,0);
}