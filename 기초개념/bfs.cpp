#include <bits/stdc++.h>

using namespace std;

int m,n,x,xx,y,yy,a,b;
int dy[4] = {-1,0,1,0};
int dx[4] = {0,1,0,-1};
int vi[104][104], k[104][104];


int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin >> n >> m;
    cin >> y >> x;
    cin >> yy >> xx;

    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            cin >> k[i][j];
        }
    }

    vi[y][x] = 1;
    queue<pair<int, int>> q;
    q.push({y,x});
 
    while (q.size())
    {
        tie(a, b) = q.front(); q.pop();

        for(int i = 0; i < 4; i++ ){
            int diy = dy[i] + a;
            int dix = dx[i] + b;

            if(diy >= n || diy < 0 || dix >= m || dix < 0) continue;
            if(vi[diy][dix]) continue;
            if(k[diy][dix] == 0) continue;

            vi[diy][dix] = vi[a][b] + 1;
            q.push({diy, dix});
        }
    }
    
    cout << vi[yy][xx];
   
}