#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, M, K, visited[330000];
vector<ll> v[330000], ans;
void BFS(ll st){
    queue<ll> q;
    q.push(st);
    visited[st]=1;
    while (!q.empty()){
        ll x=q.front();
        q.pop();
        if (x==K)
            break;
        for (auto dx:v[x]){
            if (!visited[dx]){
                visited[dx]=visited[x]+1;
                q.push(dx);
            }
        }
    }
    if (visited[K])
        ans.push_back(visited[K]);
    visited[K]=0;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M >> K;
    for (int i=0;i<N-1;i++){
        ll a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    for (int i=1;i<=M;i++)
        BFS(i);
    sort(ans.begin(),ans.end());
    cout << N-ans[0]-ans[1]+1;
    return 0;
}