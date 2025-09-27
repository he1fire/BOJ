#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, M, ans;
vector<ll> v;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M;
    for (ll i=0,a;i<N;i++){
        cin >> a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    for (ll i=0;i<N;i++)
        ans+=v[i]*min(i,M);
    cout << ans;
    return 0;
}