#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, M, ans, now;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M;
    for (ll i=0;i<M;i++){
        ll x;
        cin >> x;
        if (x<now)
            ans++;
        now=x;
    }
    cout << ans;
    return 0;
}