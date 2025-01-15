#include <bits/stdc++.h>

using namespace std;

string s;

void check(stack<char> &stack, char a){
    if(!stack.empty() && stack.top() == '[' && a == ']') stack.pop();
    else if(!stack.empty() && stack.top() == '(' && a == ')') stack.pop();
    else stack.push(a);
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
 
    while(true){
        stack<char> stack;
        getline(cin,s);
        if(s == ".")break;

        for(int j=0; j<s.size(); j++){
            if(s[j] == '[' || s[j] == ']'||  s[j] == ')' || s[j] == '(' )check(stack,s[j]);
        }
        if(stack.empty()) cout <<"yes\n";
        else cout << "no\n";
    }

}