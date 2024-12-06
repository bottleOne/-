#include <bits/stdc++.h>

using namespace std;
int a[1000004], b, c, psum[1000004], n, m;

//prefitSum
int main(){
    ios_base::sync_with_stdio(false); // C++의 입출겨과 C의 입출력의 동기화를 끊어준다->동기화중의 오버헤드를 없에 입출력속도를 올려준다. 대용량데이터를 할때 눈에 띄게 빨라진다고 한다.
    //*주의 동기화가 끊어졌기때문에 혼용해서 입출력사용 불가
    cin.tie(NULL);// cin호출시 cout의 플러시를 막아준다. 즉 입력받자마자 뱉어준다 -> 입출력향상

    cin >> n >> m;

    for(int i = 1; i <= n; i++ ){
        cin >> a[i];
        psum[i] = psum[i-1] + a[i]; 
    }

    for(int i = 0; i < m; i++){
        cout << "입력[" << i << "]" << "\n";
        cin >> b >> c;
        cout << psum[c]-psum[b-1] << "\n";
    }

}