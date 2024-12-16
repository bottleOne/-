#include <bits/stdc++.h>

using namespace std;

int n;
string p, pf,pb,r;

int main(){
 
    cin >> n;
    cin >> p;

    int point = p.find('*');
    pf = p.substr(0, point);
    pb = p.substr(point+1);
    

    for(int i = 0; i< n; i++){
        cin >> r;
        if(pf.size() + pb.size() > r.size()) cout << "NE\n";
        else{
           if(pf==r.substr(0,pf.size()) && pb == r.substr(r.size()-pb.size())) cout << "DA\n";
        else cout << "NE\n"; 
        }
        
    }
    return 0;
}