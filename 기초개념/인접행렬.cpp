#include <bits/stdc++.h>

using namespace std;
const int v=10;
bool a[v][v];
int vi[v];

void go(int x){
    vi[x]=1;
    cout << x;

    for( int i = 0; i< v; i++){
        if(vi[i]) continue;
        if(a[x][i])go(i);
    }
}

int main(){

    a[1][2] = 1; a[2][1] = 1;
    a[1][3] = 1; a[3][1] = 1;
    a[3][4] = 1; a[4][3] = 1;

    for(int i = 0;i < v; i++){
        for(int j = 0; j < v ; j++){
            if(a[i][j] && vi[i] == 0) go(i);
        }
    }
}