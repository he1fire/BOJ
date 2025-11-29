#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, ans=-1;
vector<ll> v;
ll f(ll x){
    ll ret=x%10;
    x/=10;
    while (x){
        if (ret!=x%10+1)
            return 0;
        ret--;
        x/=10;
    }
    return 1;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for (ll i=0;i<N;i++){
        ll a;
        cin >> a;
        v.push_back(a);
    }
    for (ll i=0;i<N;i++){
        for (ll j=i+1;j<N;j++){
            if (f(v[i]*v[j]))
                ans=max(ans,v[i]*v[j]);
        }
    }
    cout << ans;
    return 0;
}