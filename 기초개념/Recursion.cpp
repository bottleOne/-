#include <bits/stdc++.h>
using namespace std;

//팩토리얼
int factorail(int n){
    if(n == 1||n == 0){
        return 1;
    }

    return n * factorail(n - 1);
}

//for문.Ver
int factorial_for(int n){
    int ret = 1;
    for(int i = 1; i <= n; i++){
        ret *= i;
    }
    return ret;
}

int fibonach(int n){
    if(n ==0 || n == 1){
        return 1;
    }
    return fibonach(n-1) + fibonach(n-2);
}

int n = 5;
int main(){
    
    cout << "Factorial : " << factorail(n) << '\n';
    cout << "Factorial_for : "  << factorial_for(n) << '\n';
    cout << "Fibonach : "  << fibonach(n) << '\n';
    return 0;
}
