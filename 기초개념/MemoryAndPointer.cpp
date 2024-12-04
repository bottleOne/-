#include <bits/stdc++.h>

using namespace std;

//오로지 배열일 경우에만 가능
void arrayToPointerDecay(){
    
    int a[3] = {1,2,3};
    int *c = a;

    cout << c << "\n";
    cout << *c << "\n";
    cout << c+1 << "\n";
    cout << *(c+1) << "\n";
    return;   
}

int main(){
    int a;


    cout << "주솟값 = " << &a << "\n";
    
    a = 10;
    
    cout << "값 할당 후 주솟값 = " << &a << "\n"; 

    int *b = &a;

    cout << "포인터 = " << b << "\n"; 
    cout << "역참조 = " << *b << "\n"; 

    cout << "-----ArrayToPonterDecay----" << "\n";
    arrayToPointerDecay();
    return 0; 
}