#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, mx;
vector<ll> v, ans[2];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for (ll i=0;i<N;i++){
        ll a;
        cin >> a;
        v.push_back(a);
        mx=max(a,mx);
        ans[0].push_back(mx);
    }
    mx=0;
    for (ll i=N-1;i>=0;i--){
        mx=max(v[i],mx);
        ans[1].push_back(mx);
    }
    reverse(ans[1].begin(),ans[1].end());
    for (ll i=0;i<N;i++)
        cout << ans[0][i] << " " << ans[1][i] << "\n";
    return 0;
}