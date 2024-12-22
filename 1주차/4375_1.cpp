#include <bits/stdc++.h>

using namespace std;

int n;

//시간복잡도를 고려해서 나머지값을 구한다.
//(a+(or *)b)%c a+b값의 인수의 크기가 커지경우 오류가 발생할 수있다.
//그리하여 (a%c + a%c)%c로 각각의 값마다 %f를 해줘 큰수가 생길수 있는 케이스를 줄여준다
int main(){
    while(scanf("%d",&n) != EOF){
        int cnt =1;
        long long a =1;
        while(true){
            if(a%n==0){
                printf("%d\n", cnt);
                break;
            }else{
                a = (a * 10) +1;
                a %= n;
                cnt++;
            } 
        }
    }
}