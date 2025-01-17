#include <bits/stdc++.h>

using namespace std;

int n,m;
int dy[]  = {-1,0,1,0};
int dx[] =  {0,1,0,-1};
int vi[105][105] ,a[105][105];
vector <pair<int,int>> v;

void go(int y, int x){
    vi[y][x] = 1;

    if(a[y][x] == 1){
        v.push_back({y,x});
        return;
    }

    for(int i=0; i<4; i++){
         int diy = dy[i] + y;
         int dix = dx[i] + x;

         if(diy >= n || diy < 0 || dix >= m || dix < 0 || vi[diy][dix]) continue;
         go(diy,dix);
    }
     return;
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin >> n >> m;

    for(int i=0; i<n; i++){
        for(int j=0; j< m; j++){
            cin >> a[i][j];
        }
    }

    int cnt = 0;

    while(true){
        fill(&vi[0][0],&vi[0][0] + 105*105, 0);
        v.clear();
        go(0,0);
        for(pair<int,int> b : v){
            a[b.first][b.second] = 0;
        }
        bool flag = true;
        for(int i=0; i<n; i++){
            for(int j=0; j< m; j++){
                if( a[i][j] == 1) flag = false;
            }
        }
        cnt++;
        if(flag) break;
    }

    cout << cnt << "\n";
    cout << v.size();

}