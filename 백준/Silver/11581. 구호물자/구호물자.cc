#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, M;
vector<ll> v[105];
ll visited[105];
ll f(ll x){
    ll ret=0;
    if (x==N)
        return 0;
    visited[x]=1;
    for (auto dx:v[x]){
        if (visited[dx])
            return 1;
        ret+=f(dx);
    }
    visited[x]=0;
    return ret;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for (int i=1;i<N;i++){
        cin >> M;
        while (M--){
            ll a;
            cin >> a;
            v[i].push_back(a);
        }
    }
    cout << (f(1) ? "CYCLE" : "NO CYCLE");
    return 0;
}
