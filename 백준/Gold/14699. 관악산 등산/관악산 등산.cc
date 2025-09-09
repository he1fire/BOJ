#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, M, arr[5005], dp[5005];
vector<ll> v[5005];
ll DFS(ll x){
    ll ret=0, mx=0;
    if (dp[x])
        return dp[x];
    for (auto dx:v[x])
        ret=max(ret,DFS(dx));
    if (!ret)
        return dp[x]=1;
    else
        return dp[x]=ret+1;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M;
    for (ll i=1;i<=N;i++)
        cin >> arr[i];
    while (M--){
        ll a, b;
        cin >> a >> b;
        if (arr[a]>arr[b])
            v[b].push_back(a);
        else
            v[a].push_back(b);
    }
    for (ll i=1;i<=N;i++){
        DFS(i);
        cout << dp[i] << "\n";
    }
    return 0;
}