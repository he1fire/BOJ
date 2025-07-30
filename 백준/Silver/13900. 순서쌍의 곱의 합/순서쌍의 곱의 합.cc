#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll ans=0, sum=0;
    vector<ll> v;
    cin >> N;
    for (int i=0;i<N;i++){
        ll a;
        cin >> a;
        sum+=a;
        v.push_back(a);
    }
    for (auto i:v)
        ans+=(sum-i)*i;
    cout << ans/2;
    return 0;
}