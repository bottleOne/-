#include <bits/stdc++.h>

using namespace std;

int n,m,k,cnt=0,emty_cnt=0;
int cc[101][101],diy,dix;
vector<int> et;
bool vi[101][101];
int dy[] = {-1,0,1,0};
int dx[] = {0,1,0,-1};

void go(int y, int x){

    vi[y][x] = 1;
    cnt++;

    for(int i=0; i<4; i++){
        diy = dy[i] + y;
        dix = dx[i] + x;

        if(diy >= n || diy < 0 || dix >= m || dix < 0) continue;
        if(vi[diy][dix]) continue;
        if(cc[diy][dix] == 1) continue;
        go(diy, dix);
    }
}

int main (){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin >> n >> m >> k;

    int a,b,c,d;

    //입력
    for(int i=0; i < k; i++){
        cin >> a >> b >> c >> d;
        
        for(int i = b; i < d; i++){
            for(int j = a; j < c; j++){
                cc[i][j]=1;
            }
        }
    }

    for(int i=0; i<n; i++){
        for(int j =0; j<m; j++){
            if(!vi[i][j] && cc[i][j] == 0){
                cnt = 0;
                go(i,j);
                emty_cnt++;
                et.push_back(cnt);
            } 
        }
    }
    
    cout << emty_cnt << "\n";

    sort(et.begin(), et.end()); 
    for(int e : et){
        cout << e << " ";
    }

}