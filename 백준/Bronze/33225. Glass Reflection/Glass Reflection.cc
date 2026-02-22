#include <bits/stdc++.h>
#define ll long long
#define MOD (ll)(1e9+7)
using namespace std;
string S;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> S;
    for (ll i=1;i<S.size();i++){
        if (S[i]==S[i-1])
            cout << S[i];
    }
    return 0;
}