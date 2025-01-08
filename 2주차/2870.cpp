#include <bits/stdc++.h>

using namespace std;

int n;
vector<string> v;
string s, value;

bool cmp(string a, string b){
    if(a.size() == b.size()) return a < b;
    return a.size()  < b.size();
}

void go(){
    while(true){
        if(value.size()&&value.front() == '0') value.erase(value.begin());
        else break;
    }

    if(value.size() == 0) value = "0";
    v.push_back(value);
    value = "";
}

int main(){
    cin >> n;

    for(int i=0; i<n; i++){

        cin >> s;
        value = "";

        for(int j=0; j<s.size(); j++){
            
            char current = s[j];
            if(current < 65) value += s[j];
            else if(value.size()) go();
        }
        if(value.size()) go();
        sort(v.begin(), v.end(),cmp);
    }

    for(string s : v) cout << s << "\n";
}