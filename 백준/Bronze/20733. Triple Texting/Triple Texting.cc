#include <bits/stdc++.h>
#define ll long long
using namespace std;
string S;
map<string,ll> m;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> S;
    m[S.substr(0,S.size()/3)]++;
    m[S.substr(S.size()/3,S.size()/3)]++;
    m[S.substr(S.size()/3*2,S.size()/3)]++;
    for (auto x:m){
        if (x.second>1)
            cout << x.first;
    }
    return 0;
}