#include <bits/stdc++.h>
#define ll long long
#define INF 1e9+7
#define MOD (ll)(1e9+7)
using namespace std;
typedef pair<ll,ll> pll;
ll N, M, ans;
vector<pll> v;
ll f(ll x){
    if (x%2)
        return (x/2)*(x/2+1)>=N;
    else
        return (x/2)*(x/2)>=N;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    ll lo=-1, hi=2000000000;
    while (lo+1<hi){
        ll mid=(lo+hi)/2;
        if (f(mid))
            hi=mid;
        else
            lo=mid;
    }
    cout << hi;
    return 0;
}