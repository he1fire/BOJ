#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#define ll long long
using namespace std;
ll N, lo=0, hi=1000000000; 
vector<ll> v;
ll f (ll x){
    ll ans=0;
    for (int i=0;i<N;i++)
        ans+=abs(v[i]-x*i);
    return ans;
}
int main () {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for (ll i=0;i<N;i++){
        ll a;
        cin >> a;
        v.push_back(a);
    }
    for (int i=0;i<30;i++){
        int mid=(lo+hi)/2;
        if (f(mid)<f(mid+1))
            hi=mid;
        else
            lo=mid;
    }
    cout << f(hi);
    return 0;
}