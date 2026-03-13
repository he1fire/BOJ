#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, ans;
vector<ll> v;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for (ll i=0;i<N;i++){
        ll a;
        cin >> a;
        v.push_back(a);
        ans+=a;
    }
    sort(v.begin(),v.end());
    for (ll i=0;i<N/2;i++)
        ans+=v[N-i-1]-v[i];
    cout << ans;
    return 0;
}