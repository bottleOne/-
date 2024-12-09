#include <bits/stdc++.h>

using namespace std;

int a[9];
//순열 재귀함수를 이용하여 
int solve(){
    int sum = 0;
    for(int i = 0; i< 7; i++) sum += a[i];
    if(sum == 100){
        sort(a, a+7);
        for(int j =0; j < 7; j++){
            cout << a[j] << "\n";
        }
        //재귀함수라 main자체를 종료 시켜줘야합니다.
        exit(0);
    }
    return 0;
}

int make_permutation(int n, int k, int depth){
    if(k == depth){
        solve();
    }
    
    for(int i = depth; i < n; i++){
        swap(a[i], a[depth]);
        make_permutation(n, k, depth+1);
        swap(a[i], a[depth]);
        
    }
    return 0;
}

int main (){
    for(int i= 0; i < 9; i++ ){
        cin >> a[i]; 
    }
   
    make_permutation(9, 7, 0);

    //함수를 사용하여 문제 해결
    /*do{
        for(int i = 0; i < 7; i++){
            sum +=a[i];
        }
        if(sum == 100){
            break;
        }
        sum = 0;
    }while(next_permutation(a , a + 9));
    for(int i = 0; i < 7; i++){
                cout << a[i] << "\n";
    }*/
    return 0;
}

