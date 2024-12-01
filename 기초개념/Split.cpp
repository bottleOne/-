#include <bits/stdc++.h>
using namespace std;

vector<string> split(const string& input, string delimeter){
    vector<string> result;
    auto start = 0;
    auto end = input.find(delimeter);
    while( end != string::npos){
        result.push_back(input.substr(start, end - start));
        start = end + delimeter.size();
        end = input.find(delimeter, start);
    }

    result.push_back(input.substr(start));
    return result;
}

int main(){
    string str = "apple,banana,orange,mellon";
    vector<string> fruits = split(str, ",");  
    for(const string& fruit : fruits){
        cout << fruit << " ";
    }
    return 0;
}