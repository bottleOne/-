#include <stdc++.h>

using namespace std;

long long a,b,c,d;
//long long d;

//나머지 값을 구한다는걸 명심하자
long long solve(int a, int b){
    if(b==1) return a % c;

    d = solve(a, b/2);
    d = (d*d)%c;
    if(b & 1) d = (d * a) % c;

    return d;
}


int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin >> a >> b >> c;

    cout << solve(a,b);
}