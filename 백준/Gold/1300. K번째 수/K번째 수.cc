#include <bits/stdc++.h>
#define ll long long
#define MOD 1e9+7
using namespace std;
ll N, K;
ll f(ll x){
    ll cnt=0;
    for (int i=1;i<=N;i++){
        cnt+=min(N,x/i);
    }
    return cnt<K;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> K;
    ll lo=1, hi=K, ans=0;
    while (lo<=hi){
        ll mid=(lo+hi)/2;
        if (f(mid))
            lo=mid+1;
        else{
            ans=mid;
            hi=mid-1;
        }
    }
    cout << ans;
    return 0;
}