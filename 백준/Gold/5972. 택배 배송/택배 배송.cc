#include <bits/stdc++.h>
#define ll long long
#define INF 1e9+7
using namespace std;
struct ABC{
    ll idx, dst;
    ABC() {}
    ABC(ll idx, ll dst) : idx(idx), dst(dst) {}
};
bool operator<(ABC x, ABC y){
    return x.dst>y.dst;
}
ll N, M, visited[50005];
vector<ABC> arr[50005];
priority_queue<ABC> pq;
ll dijkstra(ll st, ll ed){
    fill(&visited[0],&visited[50004],INF);
    visited[st]=0;
    pq.push({st,0});
    while (!pq.empty()){
        ll x=pq.top().idx, curr=pq.top().dst;
        pq.pop();
        if (curr>visited[x])
            continue;
        for (int i=0;i<arr[x].size();i++){
            ll dx=arr[x][i].idx, next=arr[x][i].dst;
            if (visited[dx]>curr+next){
                visited[dx]=curr+next;
                pq.push({dx,curr+next});
            }
        }
    }
    return visited[ed];
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M;
    for (int i=0;i<M;i++){
        ll a, b, c;
        cin >> a >> b >> c;
        arr[a].push_back({b,c});
        arr[b].push_back({a,c});
    }
    cout << dijkstra(1,N);
    return 0;
}