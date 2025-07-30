#include <bits/stdc++.h>
#define ll long long
using namespace std;
typedef pair<ll,ll> pll;
struct ABC {
    ll x, y, cost;
    ABC() {}
    ABC(ll x, ll y, ll cost) : x(x), y(y), cost(cost) {}
};
bool operator<(ABC x, ABC y){
    return x.cost > y.cost;
}
int N, M, K, arr[1005], cnt, visited[1005][1005];
vector<pll> v[1005];
priority_queue<ABC> pq;
queue<pll> q;
ll Find(ll x){
    if (x==arr[x])
        return x;
    return arr[x]=Find(arr[x]);
}
void Union(ll x, ll y){
    arr[Find(x)]=Find(y);
}
void BFS(ll st){
    visited[st][st]=0;
    q.push({st,0});
    while (!q.empty()){
        ll x=q.front().first, curr=q.front().second;
        q.pop();
        for (int i=0;i<v[x].size();i++){
            ll dx=v[x][i].first, next=v[x][i].second;
            if (visited[st][dx]==-1){
                visited[st][dx]=max(curr,next);
                q.push({dx,max(curr,next)});
            }
        }
    }
}
int main () {
    cin >> N >> M;
    for (int i=0;i<=N;i++)
        arr[i]=i;
    for (int i=0;i<M;i++){
        ll a, b, c;
        cin >> a >> b >> c;
        pq.push({a,b,c});
    }
    while (!pq.empty()){
        int x=pq.top().x, y=pq.top().y, cost=pq.top().cost;
        pq.pop();
        if (Find(x)==Find(y))
            continue;
        Union(x,y);
        cnt+=cost;
        v[x].push_back({y,cost});
        v[y].push_back({x,cost});
    }
    fill(&visited[0][0],&visited[1004][1005],-1);
    for (int i=1;i<=N;i++)
        BFS(i);
    cin >> K;
    for (int i=0;i<K;i++){
        ll a, b;
        cin >> a >> b;
        cout << cnt-visited[a][b] << "\n";
    }
    return 0;
}