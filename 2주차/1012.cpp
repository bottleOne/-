#include <bits/stdc++.h>

using namespace std;

int t,n,m,k,x,y;

int vi[51][51];
int  g[51][51];
int dy[] = {-1,0,1,0};
int dx[] = {0,1,0,-1};


void go(int a, int b){

    vi[a][b] = 1;
    for(int i=0; i<4; i++){

        int diy = dy[i] + a;
        int dix = dx[i] + b;
        if(diy < 0 || diy >= n || dix < 0 || dix >= m) continue;
        if(vi[diy][dix]) continue;
        if(g[diy][dix] == 0) continue;
        go(diy,dix);
    }
}

int main(){
    //ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin >> t;
    
    while(t--){
        fill(&g[0][0], &g[0][0] + 51*51, 0);
        fill(&vi[0][0], &vi[0][0] + 51*51, 0);

        cin >> m >> n >> k;
        
        int cnt = 0;
        for(int i=0; i<k; i++){
            cin >> x >> y;
            g[y][x] = 1;
        }

        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(g[i][j] == 1 && !vi[i][j]){
                    cnt++;
                    go(i,j);
                }
            }
        }
        cout << cnt << "\n";

    }
}



