#include <bits/stdc++.h>
#define ll long long
using namespace std;
string S;
set<string> s;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    while (cin >> S){
        string tmp;
        getline(cin,tmp);
        cin.ignore();
        s.insert(tmp);
    }
    cout << s.size();
    return 0;
}