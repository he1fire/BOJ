#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, ans;
map<ll,ll> m;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    while (N--){
        ll a, b, c;
        cin >> a >> b >> c;
        m[a-b]+=c;
    }
    for (auto x:m)
        ans=max(ans,x.second);
    cout << ans;
    return 0;
}