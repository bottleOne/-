#include <bits/stdc++.h>

using namespace std;

string s,result;
char mid;
int flag;
map<char,int> cnt;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin >> s;
   
    for(char i :s){
        cnt[i]++;
    }

    for(int i='Z'; i>='A';i--){
        if(cnt[i]){
            if(cnt[i] & 1){
                mid = char(i);
                cnt[i]--;
                flag++; 
            }
            if(flag==2) break;
            for(int j=0; j < cnt[i];j+=2){
                result = char(i) + result;
                result += char(i);
            } 
        }
    }

    if(mid)result.insert(result.begin()+result.size()/2,mid);
    if(flag==2) cout << "I'm Sorry Hansoo";
    else cout << result;
}