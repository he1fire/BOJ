#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, visited[55];
vector<ll> arr[55], ans[55];
ll BFS(ll a){
    ll ret=0;
    queue<ll> q;
    fill(&visited[0],&visited[54],-1);
    q.push(a);
    visited[a]=0;
    while (!q.empty()){
        ll x=q.front();
        q.pop();
        for (auto dx:arr[x]){
            if (visited[dx]==-1){
                q.push(dx);
                visited[dx]=visited[x]+1;
            }
        }
    }
    for (int i=1;i<=N;i++)
        ret=max(ret,visited[i]);
    return ret;
}
int main(){
    cin >> N;
    while (1){
        ll a, b;
        cin >> a >> b;
        if (a==-1 && b==-1)
            break;
        arr[a].push_back(b);
        arr[b].push_back(a);
    }
    for (ll i=1;i<=N;i++)
        ans[BFS(i)].push_back(i);
    for (ll i=1;i<=N;i++){
        if (!ans[i].empty()){
            cout << i << " " << ans[i].size() << "\n";
            for (auto j:ans[i])
                cout << j << " ";
            break;
        }
    }
    return 0;
}