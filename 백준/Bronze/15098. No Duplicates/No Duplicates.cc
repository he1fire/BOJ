#include <bits/stdc++.h>
#define ll long long
#define MOD (ll)(1e9+7)
using namespace std;
set<string> s;
ll ans;
string S;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    while (cin >> S){
        if (s.find(S)==s.end())
            s.insert(S);
        else
            ans=1;
    }
    cout << (ans ? "no" : "yes");
    return 0;
}