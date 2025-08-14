#include <bits/stdc++.h>
#define ll long long
using namespace std;
vector<ll> v[100005];
ll T, N, M, dp[100005], visited[100005];
ll DFS(ll x){
    visited[x]=1;
    ll ret=1;
    for (auto dx:v[x]){
        if (!visited[dx])
            ret+=DFS(dx);
    }
    return dp[x]=ret;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> T >> N >> M;
    T--;
    while (T--){
        ll a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    DFS(N);
    while (M--){
        ll a;
        cin >> a;
        cout << dp[a] << "\n";
    }
    return 0;
}