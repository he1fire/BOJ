#include <bits/stdc++.h>
#define ll long long
#define INF 1e10+7
using namespace std;
struct ABC{
    ll idx, dst, pac;
    ABC(){}
    ABC(ll idx, ll dst, ll pac) : idx(idx), dst(dst), pac(pac) {}
};
bool operator<(ABC x, ABC y){
    return x.dst>y.dst;
}
ll N, M, K, visit[10005][25];
vector<ABC> arr[10005];
priority_queue<ABC> pq;
ll Dijkstra(ll st, ll ed){
    fill(&visit[0][0],&visit[10004][25],INF);
    pq.push({st,0,0});
    visit[st][0]=0;
    while (!pq.empty()){
        ll x=pq.top().idx, curr=pq.top().dst, pack=pq.top().pac;
        pq.pop();
        if (visit[x][pack]<curr)
            continue;
        for (int i=0;i<arr[x].size();i++){
            ll dx=arr[x][i].idx, next=arr[x][i].dst;
            if (visit[dx][pack]>curr+next){
                visit[dx][pack]=curr+next;
                pq.push({dx,curr+next,pack});
            }
            if (pack<K && visit[dx][pack+1]>curr){
                visit[dx][pack+1]=curr;
                pq.push({dx,curr,pack+1});
            }
        }
    }
    ll ret=INF;
    for (int i=0;i<=K;i++){
        ret=min(visit[N][i],ret);
    }
    return ret;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M >> K;
    for (int i=0;i<M;i++){
        ll a, b, c;
        cin >> a >> b >> c;
        arr[a].push_back({b,c,0});
        arr[b].push_back({a,c,0});
    }
    cout << Dijkstra(1, N);
    return 0;
}