#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, M, lo=0, hi=1000000001;
vector<ll> v;
ll f(ll x){
    ll cnt=0;
    for (auto i:v){
        if (i>x)
            cnt+=i-x;
    }
    if (cnt>=M)
        return 1;
    else
        return 0;
}
int main(){
    cin >> N >> M;
    for (int i=0;i<N;i++){
        ll a;
        cin >> a;
        v.push_back(a);
    }
    for (int i=0;i<50;i++){
        ll mid=(lo+hi)/2;
        if (f(mid))
            lo=mid;
        else
            hi=mid;
    }
    cout << lo;
    return 0;
}