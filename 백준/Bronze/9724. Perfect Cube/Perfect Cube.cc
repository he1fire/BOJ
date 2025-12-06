#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N;
vector<ll> v;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    for (ll i=1;i*i*i<2000000000;i++)
        v.push_back(i*i*i);
    cin >> N;
    for (ll i=1;i<=N;i++){
        ll a, b;
        cin >> a >> b;
        cout << "Case #" << i << ": " << upper_bound(v.begin(),v.end(),b)-lower_bound(v.begin(),v.end(),a) << "\n";
    }
    return 0;
}