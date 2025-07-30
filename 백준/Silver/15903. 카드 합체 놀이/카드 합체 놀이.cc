#include <iostream>
#include <algorithm>
#include <vector>
#define ll long long
using namespace std;
int main () {
    vector<ll> v;
    ll N, M, ans=0;
    cin >> N >> M;
    for (ll i=0;i<N;i++){
        ll a;
        cin >> a;
        v.push_back(a);
    }
    for (ll i=0;i<M;i++){
        sort(v.begin(),v.end());
        ll cnt=v[0]+v[1];
        v[0]=cnt;
        v[1]=cnt;
    }
    for (ll i=0;i<N;i++)
        ans+=v[i];
    cout << ans;
    return 0;
}