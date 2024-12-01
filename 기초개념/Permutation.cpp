#include <bits/stdc++.h>
using namespace std;
vector<int> vf;
//------------------------재귀를 이용한 순열
void printV(vector<int> &vf){
    for(int a : vf){
        cout << a << " ";
    }
    cout << "\n";
}

void makePermutaion(int n, int r, int depth){
    if(r == depth){
        printV(vf);
        return;
    }

    for(int i = depth; i < n; i++){
        swap(vf[i], vf[depth]);
        makePermutaion(n, r, depth+1);
        swap(vf[i], vf[depth]);
    }
    return;
}
//-------------------------next_permutaion을 이용한 순열
int main(){
    vector<int> v = {1,2,3};
    
    //sort(a,a+3);//next_permutaion은 오름차순으로 진행되기 떄문에 꼭 정렬을 해주어야한다.(단순배열일경우에만 sort함수 사용가능)
    do{
        for(int va : v) {
            cout << va << " ";
        }
        cout << "\n";
        // 꼭 next_permutaion은 매개변수로 받은 배열의 순서를 기준으로 하기 때문에꼭 정렬이 되어 있는 상태에서 진행해야한다.
    }while(next_permutation(v.begin(), v.end()));//또한 매개변수에 a의 주솟값을 이용하여 넣어줘도 가능하다. ex)a, &a[0]
    

    cout << "----------재귀----------" << "\n";
    vf = {1,2,3};
    makePermutaion(3, 3, 0);
    return 0;

}

