#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N;
string S;
ll f(ll x){
    set<string> s;
    for (ll i=0;i<N-x+1;i++){
        string tmp="";
        for (ll j=0;j<x;j++)
            tmp+=S[i+j];
        s.insert(tmp);
    }
    return (N-x+1)==s.size();
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> S;
    for (ll i=1;i<=N;i++){
        if (f(i)){
            cout << i;
            break;
        }
    }
    return 0;
}