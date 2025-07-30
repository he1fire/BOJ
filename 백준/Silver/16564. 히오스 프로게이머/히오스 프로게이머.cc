#include <bits/stdc++.h>
#define ll long long
#define INF 2000000001
using namespace std;
ll N, M;
vector<ll> arr;
ll f(ll x){
    ll cnt=0;
    for (auto i:arr){
        if (i<x)
            cnt+=x-i;
        else
            break;
    }
    return cnt<=M;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M;
    for (int i=0;i<N;i++){
        ll a;
        cin >> a;
        arr.push_back(a);
    }
    sort(arr.begin(),arr.end());
    ll lo=0, hi=INF;
    while (lo+1<hi){
        ll mid=(lo+hi)/2;
        if (f(mid))
            lo=mid;
        else
            hi=mid;
    }
    cout << lo;
    return 0;
}