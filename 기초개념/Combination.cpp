#include <bits/stdc++.h>

using namespace std;
int k = 3;
int n= 5;
void combination(int r, vector<int> &v){

    if(v.size() == k){
        for(int value : v){
            cout << value << " ";
        }
        cout << "\n";
    }

    for(int i = r + 1; i < n ; i++ ){
        v.push_back(i);
        combination(i, v);
        v.pop_back();
    }
    return;
}

int main(){
    vector<int> v;
    combination(-1, v);

    //중첩for문을 이용한 조합
    cout << "--------------중첩for문을 이용한 조합--------------" << "\n";
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            for(int k = j + 1; k < n; k++){
                cout << i << " " << j << " " << k << '\n';
            }    
        }
    }   
    return 0;
}
