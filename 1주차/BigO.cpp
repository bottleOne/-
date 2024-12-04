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
        for(int j = 0; j < i; i++){
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
    if(l == r) 
    return a[l];
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
int main(){
    cout << "1번" << "\n";
    bigO1();
    cout << "2번" << "\n";;
    bigO2();
    return 0;
}