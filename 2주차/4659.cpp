#include <bits/stdc++.h>

using namespace std;

string ss;

bool check(int idx){
    return (idx == 'a' || idx == 'e' || idx == 'i' || idx == 'o' || idx == 'u');
}

int main(){

    while(true){
        cin >> ss;
        if(ss=="end") break;
        bool check_one=0, check_two=0, check_three=0;
        int cnt_a =0,cnt_b=0;

        for(int i = 0; i <ss.size(); i++){
            char cb = ss[i-1];

            if(check(ss[i])) cnt_a++, cnt_b=0 ,check_one = 1;
            else cnt_b++, cnt_a =0;
            
            if(cb == ss[i] && (ss[i] != 'e' && ss[i] != 'o')) check_three =1;
            if(cnt_a == 3 || cnt_b == 3) check_two = 1;

        }
         if(!check_one || check_two || check_three) cout << "<" << ss << "> is not acceptable."<< "\n";
         else cout << "<" << ss << "> is acceptable." << "\n";
    }
}