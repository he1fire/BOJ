#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, M, ans[100005];
priority_queue<ll, vector<ll>, greater<ll>> pq[200005];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M;
    for (ll i=1;i<=N;i++){
        ll a, b;
        cin >> a;
        for (ll j=0;j<a;j++){
            cin >> b;
            pq[b].push(i);
        }
    }
    for (ll i=0;i<M;i++){
        ll a, x;
        cin >> a;
        if (!pq[a].empty()){
            x=pq[a].top();
            pq[a].pop();
            ans[x]++;
        }
    }
    for (ll i=1;i<=N;i++)
        cout << ans[i] << " ";
    return 0;
}