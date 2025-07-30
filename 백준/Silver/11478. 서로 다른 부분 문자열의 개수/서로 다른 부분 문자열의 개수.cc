#include <bits/stdc++.h>
#define ll long long
using namespace std;
string S;
set<string> s;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> S;
    for (int i=0;i<S.size();i++){
        for (int j=1;j<=S.size()-i;j++){
            s.insert(S.substr(i,j));
        }
    }
    cout << s.size();
    return 0;
}