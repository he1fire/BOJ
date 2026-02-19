#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, P, K, L;
vector<ll> v;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for (ll i=1;i<=N;i++){
        ll ans=0;
        v.clear();
        cin >> P >> K >> L;
        for (ll j=0;j<L;j++){
            v.emplace_back();
            cin >> v.back();
        }
        sort(v.begin(),v.end(),greater<ll>());
        for (ll j=0;j<L;j++)
            ans+=v[j]*(j/K+1);
        cout << "Case #" << i << ": " << ans << "\n";
    }
    return 0;
}