#include <bits/stdc++.h>
#define ll long long
using namespace std;
struct adjlist{
    ll idx, dst;
    adjlist() {}
    adjlist(ll idx, ll dst) : idx(idx), dst(dst) {}
};
struct ABC{
    ll x, y, cost;
    ABC() {}
    ABC(ll x, ll y, ll cost) : x(x), y(y), cost(cost) {}
};
bool operator<(ABC x, ABC y){
    return x.cost < y.cost;
}
ll N, M, st, arr[50005], visited[50005], ans, mx;
vector<adjlist> v[50005];
priority_queue<ABC> pq;
ll Find(ll x){
    if (arr[x]==x)
        return x;
    return arr[x]=Find(arr[x]);
}
void Union(ll x, ll y){
    arr[Find(x)]=Find(y);
}
void DFS(ll x, ll now){
    visited[x]=1;
    ll cnt=0;
    for (int i=0;i<v[x].size();i++){
        ll dx=v[x][i].idx, next=v[x][i].dst;
        if (!visited[dx]){
            cnt++;
            DFS(dx,now+next);
        }
    }
    if (!cnt)
        mx=max(mx,now);
    visited[x]=0;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M;
    for (int i=0;i<=N;i++)
        arr[i]=i;
    for (int i=0;i<M;i++){
        ll a, b, c;
        cin >> a >> b >> c;
        pq.push({a,b,c});
    }
    cin >> st;
    while (!pq.empty()){
        ABC a=pq.top();
        pq.pop();
        if (Find(a.x)==Find(a.y))
            continue;
        Union(a.x,a.y);
        v[a.x].push_back({a.y,a.cost});
        v[a.y].push_back({a.x,a.cost});
        ans+=a.cost;
    }
    DFS(st,0);
    cout << ans*2-mx;
    return 0;
}