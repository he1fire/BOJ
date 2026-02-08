#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, M, ans, mx;
vector<ll> v;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M;
    for (ll i=0;i<N;i++){
        v.emplace_back();
        cin >> v.back();
    }
    sort(v.begin(),v.end(),greater<ll>());
    mx=v[0];
    for (ll i=0;i<N;i++){
        if (v[i]>=max(mx-M,(ll)0))
            ans+=v[i]-max(mx-M,(ll)0);
    }
    cout << ans;
    return 0;
}