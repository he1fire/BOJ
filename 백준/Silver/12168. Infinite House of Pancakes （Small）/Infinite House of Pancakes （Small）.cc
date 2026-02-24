#include <bits/stdc++.h>
#define ll long long
#define INF 1e9+7
using namespace std;
ll N, M;
vector<ll> v;
ll f(ll x){
    ll ret=x;
    for (auto a:v)
        ret+=(a-1)/x;
    return ret;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for (ll i=1;i<=N;i++){
        ll ans=INF;
        v.clear();
        cin >> M;
        while (M--){
            v.emplace_back();
            cin >> v.back();
        }
        for (ll j=1;j<=9;j++)
            ans=min(ans,f(j));
        cout << "Case #" << i <<": " << ans << "\n";
    }
    return 0;
}