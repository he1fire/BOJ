#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, M, mx=0;
vector<ll> arr;
ll f(ll x){
    ll ret=0;
    for (int i=0;i<N;i++){
        if (arr[i]<=x)
            ret+=arr[i];
        else
            ret+=x;
    }
    return M>=ret;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for (int i=0;i<N;i++){
        ll a;
        cin >> a;
        mx=max(a,mx);
        arr.push_back(a);
    }
    sort(arr.begin(),arr.end());
    cin >> M;
    ll lo=1, hi=100001;
    while (lo+1<hi){
        ll mid=(lo+hi)/2;
        if (f(mid))
            lo=mid;
        else
            hi=mid;
    }
    cout << min(lo,mx);
    return 0;
}