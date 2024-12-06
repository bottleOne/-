#include <bits/stdc++.h>

using namespace std;


//시간복잡도 구해보기
//등차수열을 이용해 시간복잡도를 구할 수 있다. O(n^2)
//n(n-1)/2
int bigO1(){
    int n1;
    cin >> n1;
    int a= 0;
    for(int i = 0; i < n1; i++){
        for(int j = 0; j < i; j++){
            a += i + j;
        }
    }

    cout << a << "\n";
    return 0;
}

//재귀함수의 시간복잡도
//등비수열을 이용해 해결
int n2, a[1004], cnt;
int go(int l, int r){
    if(l == r) return a[l];
    int mid = (l + r) / 2;
    int sum = go(l, mid) + go(mid + 1, r);
    return sum;
}
int bigO2(){
    cin >> n2;
    for(int i = 1; i <= n2; i++){
        a[i - 1] = i;
    }
    int sum = go(0, n2 - 1);
    cout << sum << '\n';
    return 0;
}

//while 문으로 반복해서 돈다
// i/2로 나누어 주면서 반복하고 i>o조건에 맞으면 while문이 종료된다
// 우리는 코드의 반복횟수에 중점을 두어야하고 n/2반복적으로 나누어주고 있고
// 점화식으로 바꾸면 [N/2^k]라는 걸 볼 수 있습니다. 여기서 이값이 0보다는 커야 성립되기때문에 종료되는 시점은 i의값은 정수만 들어가고 1이들어 가면 종료된다는걸알 수 있다 그럼 1보다는 값이 커야 반복문이종료되지않는다는걸 알 수 있다.
// N/2^k < 1 이런식이면 그럼 반복은 종료될것이다 그럼 초ㅣ소 횟수는 k > logN 이기때문에 0일때까지 더해주면  logN + 1 빅오는 O(logN)이라는걸 알 수 있다.
int N;
void big03(int N){
    int a = 0, i = N , cnt = 0; 
    
    
    while (i > 0) {
        a += i;
        i /= 2; 
        cnt++;
      cout << "i = " << i << '\n'; 
    }
    cout << "cnt= " << cnt << '\n';
    cout << a << '\n';
}

//이것또한 등비수열공식을 이용하면쉽게 풀 수 있다. 횟수가 3^N배의 수가 증가하는것을 알수 있을것이다. -> O(3^n)
int N1, cnt2;
void big04(int N1){
    cnt2++;
    cout << cnt2 << '\n';
    if(N1 == 0) return;
    for(int i = 0; i < 3; i++){
        big04(N1 - 1);
    }
    return; 
}

int main(){
    cout << "1번" << "\n";
    bigO1();
    cout << "2번" << "\n";;
    bigO2();
    cout << "3번" << "\n";;
    cin >> N;
    big03(N);
    cout << "4번" << "\n";;
    cin >> N1;
    big04(N1);
    return 0;
}