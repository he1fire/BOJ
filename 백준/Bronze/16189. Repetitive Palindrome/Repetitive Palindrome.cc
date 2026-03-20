#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N;
string S;
ll f(){
    ll ret=1;
    for (ll i=0;i<S.size()/2;i++){
        if (S[i]!=S[S.size()-i-1])
            ret=0;
    }
    return ret;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> S >> N;
    cout << (f() ? "YES" : "NO");
    return 0;
}