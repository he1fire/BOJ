#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, M, K;
vector<ll> arr;
ll f(ll x){
    ll now=0;
    deque<ll> dq;
    for (int i=0;i<M;i++)
        dq.push_back(arr[i]);
    for (int i=0;i<K;i++){
        ll mx=0;
        while (!dq.empty() && dq.front()<=now+x){
            mx=dq.front();
            dq.pop_front();
        }
        now=max(now,mx);
    }
    return (now+x>=N);
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M >> K;
    for (int i=0;i<M;i++){
        ll a;
        cin >> a;
        arr.push_back(a);
    }
    sort(arr.begin(),arr.end());
    ll lo=0, hi=N;
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