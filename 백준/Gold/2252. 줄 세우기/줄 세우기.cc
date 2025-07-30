#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, M, chk[32005];
vector<ll> arr[32005];
void TopologySort(){
    ll ret=0;
    queue<ll> q;
    for (int i=1;i<=N;i++){
        if (chk[i]==0)
            q.push(i);
    }
    for (int i=1;i<=N;i++){
        ll x=q.front();
        q.pop();
        cout << x << " ";
        for (int j=0;j<arr[x].size();j++){
            ll dx=arr[x][j];
            if (--chk[dx]==0)
                q.push(dx);
        }
    }
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M;
    for (int i=0;i<M;i++){
        ll a, b;
        cin >> a >> b;
        arr[a].push_back(b);
        chk[b]++;
    }
    TopologySort();
    return 0;
}