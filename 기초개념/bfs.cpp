#include <bits/stdc++.h>

using namespace std;

int m,n,x,xx,y,yy;
int dy[] = {-1,0,1,0};
int dx[] = {0,1,0,-1};
int vi[104][104], k[104][104];
int result[104][104];

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin >> n >> m;
    cin >> y >> x;
    cin >> yy >> xx;

    for(int i = 0; i<y; i++){
        for(int j = 0; j<x; j++){
            cin >> k[i][j];
        }
    }

    vi[n][m] = 1;
    queue<pair<int, int>> q;
    q.push({n,m});

    while (q.size())
    {
        tie(y, x) = q.front(); q.pop();

        for(int i = 0; i < 4; i++ ){
            int diy = dy[i] + y;
            int dix = dx[i] + x;

            if(diy >= 3 || diy < 0 || diy >= 3 || diy < 0) continue;
            if(vi[diy][dix] == 1) continue;
            if(k[diy][dix] == 1) continue;

            vi[diy][dix] = vi[y][x] + 1;
            q.push({diy, dix});
        }
    }
    
    cout << vi[yy][xx];
   
}