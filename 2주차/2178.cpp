#include <bits/stdc++.h>

using namespace std;

int n,k,y,x;
int a[100][100];
int vi[100][100];
int dy[] = {-1,0,1,0};
int dx[] = {0,1,0,-1};

int main(){


    scanf("%d %d", &n,&k);
    for(int i =0; i<n; i++){
        for(int j=0; j<k; j++){
            scanf("%1d", &a[i][j]);
        }
    }
    vi[0][0] = 1;
    queue<pair<int, int>> q;
    q.push({0,0});

    while(q.size()){
        tie(y, x) = q.front(); q.pop();

        for(int i = 0; i<4; i++){
            int diy = dy[i] + y;
            int dix = dx[i] + x;
            if(diy < 0 || diy >= n || dix < 0 || dix >= k) continue;
            if(vi[diy][dix]) continue;
            if(a[diy][dix] == 0) continue;

            vi[diy][dix] = vi[y][x] + 1;
            q.push({diy, dix});
        }
    }
    printf("%d", vi[n-1][k-1]);

}