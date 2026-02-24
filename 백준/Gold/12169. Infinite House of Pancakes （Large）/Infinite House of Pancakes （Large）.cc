#include <bits/stdc++.h>
#define ll long long
#define INF 1e9+7
using namespace std;
ll N, M;
vector<ll> v;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for (ll i=1;i<=N;i++){
        ll ans=INF, mx=0;
        v.clear();
        cin >> M;
        while (M--){
            ll a;
            cin >> a;
            mx=max(mx,a);
            v.push_back(a);
        }
        for (ll j=1;j<=mx;j++){
            ll cnt=j;
            for (auto x:v)
                cnt+=(x-1)/j;
            ans=min(ans,cnt);
        }
        cout << "Case #" << i <<": " << ans << "\n";
    }
    return 0;
}