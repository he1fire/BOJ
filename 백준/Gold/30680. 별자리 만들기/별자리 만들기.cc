#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, M, ans, visited[100005];
vector<ll> arr[100005], cnt;
queue<ll> q;
priority_queue<ll,vector<ll>,greater<ll>> pq;
void BFS(){
    cin >> M;
    fill(&visited[0],&visited[M+1],-1);
    q.push(1);
    visited[1]=1;
    for (int i=0;i<M-1;i++){
        ll a, b;
        cin >> a >> b;
        arr[a].push_back(b);
        arr[b].push_back(a);
    }
    while (!q.empty()){
        ll x=q.front(), chk=1;
        q.pop();
        for (auto dx:arr[x]){
            if (visited[dx]==-1){
                visited[dx]=visited[x]+1;
                q.push(dx);
                chk=0;
            }
        }
        if (chk)
            cnt.push_back(visited[x]);
    }
    ll mn=pq.top();
    pq.pop();
    for (auto x:cnt)
        pq.push(x+mn);
    cnt.clear();
    for (int i=1;i<=M;i++)
        arr[i].clear();
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    pq.push(0);
    cin >> N;
    while (N--)
        BFS();
    while (!pq.empty()){
        ans=max(ans,pq.top());
        pq.pop();
    }
    cout << ans;
    return 0;
}