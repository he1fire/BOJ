#include <bits/stdc++.h>
#define ll long long
using namespace std;
string S;
string f(string x){
    ll cnt=0;
    string ret;
    for (ll i=0;i<x.size();i++)
        cnt+=x[i]-'A';
    for (ll i=0;i<x.size();i++)
        ret+=(x[i]-'A'+cnt)%26+'A';
    return ret;
}
string g(string x, string y){
    string ret;
    for (ll i=0;i<x.size();i++)
        ret+=(x[i]-'A'+(y[i]-'A'))%26+'A';
    return ret;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> S;
    cout << g(f(S.substr(0,S.size()/2)),f(S.substr(S.size()/2)));
    return 0;
}