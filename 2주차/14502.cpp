#include <bits/stdc++.h>

using namespace std;

int n,m,ret=0;
int a[8][8];
vector<pair<int,int>> w, v;
int vi[8][8];
int dy[] = {-1,0,1,0};
int dx[] = {0,1,0,-1};

void go(int y , int x){
    
    for(int i=0; i<4; i++){
        int diy = dy[i] + y;
        int dix = dx[i] + x;

        if(n <= diy || 0 > diy ||  m <= dix || 0 > dix) continue;
        if(vi[diy][dix])continue;
        if(a[diy][dix] == 1) continue;
        vi[diy][dix] = 1; 
        go(diy, dix);
    }
}

int solve(){
    fill(&vi[0][0], &vi[0][0] + 8 * 8, 0);
    int cnt = 0;

    for(pair<int, int> b : v){
        vi[b.first][b.second] = 1;
        go(b.first, b.second);
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(vi[i][j] != 1 && a[i][j] == 0) cnt++;
        }
    }
    return cnt;
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin >> n >> m;

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> a[i][j];
            if(a[i][j]==2) v.push_back({i,j});
            else if(a[i][j] == 0) w.push_back({i,j}); 
        }
    }

    for(int i=0; i<w.size(); i++){
        for(int j=0; j<i; j++){
            for(int z=0; z<j; z++){
                a[w[i].first][w[i].second] = 1;
                a[w[j].first][w[j].second] = 1;
                a[w[z].first][w[z].second] = 1;
                ret = max(ret, solve());
                a[w[i].first][w[i].second] = 0;
                a[w[j].first][w[j].second] = 0;
                a[w[z].first][w[z].second] = 0;
            }
            
        }
    }

    cout << ret;
}