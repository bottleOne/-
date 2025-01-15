#include <bits/stdc++.h>

using namespace std;

string s;
int n;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin >> n;

    for(int i=0; i<n; i++){
        cin >> s;
        stack<char> stack;
   
        for(int j=0; j<s.size(); j++){
            if(!stack.empty() && stack.top() == '(' && s[j] == ')') stack.pop();
            else stack.push(s[j]);
        }
        if(stack.empty()) cout << "YES" << "\n";
        else cout  << "NO" << "\n";
    }
}
