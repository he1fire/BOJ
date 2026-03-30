#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, ans;
vector<ll> v;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for (ll i=0;i<N;i++){
        v.emplace_back();
        cin >> v.back();
    }
    reverse(v.begin(),v.end());
    ans=N;
    for (ll i=0;i<N;i++){
        if (v[i]==ans)
            ans--;
    }
    cout << ans;
    return 0;
}