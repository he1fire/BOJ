#include <bits/stdc++.h>
#define ll long long
using namespace std;
string S, chk="";
set<ll> s;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> S;
    for (ll i=0;i<=S.size();i++){
        if ('0'<=S[i] && S[i]<='9')
            chk+=S[i];
        else{
            if (chk=="")
                continue;
            s.insert(stol(chk));
            chk="";
        }
    }
    cout << s.size();
    return 0;
}