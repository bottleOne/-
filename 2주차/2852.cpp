#include <stdc++.h>

using namespace std;
#define prev prevValue
string t,prev;
int n,tn,A,B,t_1,t_2;


string print(int a){
    string hh = "00" + to_string(a/60);
    string mm = "00" + to_string(a%60);

    return hh.substr(hh.size()-2,2)+":"+mm.substr(mm.size()-2,2);
}

int calculate(string a){
    return (atoi(a.substr(0,2).c_str()) * 60) + atoi(a.substr(3,2).c_str());
}

void timeCalculation(int &sum, string s){
    sum +=  (calculate(s) - calculate(prev));
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> tn >> t;
        if(A > B) timeCalculation(t_1, t);
        else if(B > A) timeCalculation(t_2, t);
        tn == 1 ? A++ : B++;
        prev = t;  
    }
    if(A > B) timeCalculation(t_1, "48:00");
    else if(B > A) timeCalculation(t_2, "48:00");

    cout << print(t_1) << "\n";
    cout << print(t_2);
}