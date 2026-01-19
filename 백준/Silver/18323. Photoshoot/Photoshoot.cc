#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, arr[1005];
vector<ll> v;
set<ll> s;
ll f(ll x){
    ll cnt=1;
    v.clear();
    s.clear();
    v.push_back(x);
    s.insert(x);
    for (ll i=0;i<N-1;i++){
        v.push_back(arr[i]-v.back());
        s.insert(v.back());
    }
    if (s.size()<N)
        return 0;
    for (auto x:s){
        if (cnt!=x)
            return 0;
        cnt++;
    }
    return 1;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for (ll i=0;i<N-1;i++)
        cin >> arr[i];
    for (ll i=1;i<=N;i++){
        if (f(i)){
            for (auto x:v)
                cout << x << " ";
            return 0;
        }
    }
    return 0;
}