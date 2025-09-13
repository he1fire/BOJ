#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll cnt, ans;
string S;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> S;
    for (int i=0;i<S.size();i++)
        cnt+=S[i]-'0';
    for (ll i=0, x=1;i<S.size();i++, x*=10)
        ans+=cnt*x;
    cout << ans;
    return 0;
}