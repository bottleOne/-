#include <bits/stdc++.h>

using namespace std;

int main(){
    int a;


    cout << "주솟값 = " << &a << "\n";
    
    a = 10;
    
    cout << "값 할당 후 주솟값 = " << &a << "\n"; 

    int *b = &a;

    cout << "포인터 = " << b << "\n"; 
    cout << "*포인터 = " << *b << "\n"; 
    return 0; 
}