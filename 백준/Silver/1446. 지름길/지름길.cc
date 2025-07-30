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
ll N, M, visit[10005];
vector<ABC> arr[10005];
priority_queue<ABC> pq;
ll Dijkstra(ll st, ll ed){
    fill(&visit[0],&visit[10004],INF);
    pq.push({st,0});
    visit[st]=0;
    while (!pq.empty()){
        ll x=pq.top().idx, curr=pq.top().dst;
        pq.pop();
        if (visit[x]<curr)
            continue;
        for (int i=0;i<arr[x].size();i++){
            ll dx=arr[x][i].idx, next=arr[x][i].dst;
            if (visit[dx]>curr+next){
                visit[dx]=curr+next;
                pq.push({dx,curr+next});
            }
        }
        if (x+1<=M && visit[x+1]>curr+1){
            visit[x+1]=curr+1;
            pq.push({x+1,curr+1});
        }
    }
    return visit[ed];
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M;
    for (int i=0;i<N;i++){
        ll a, b, c;
        cin >> a >> b >> c;
        arr[a].push_back({b,c});
    }
    cout << Dijkstra(0,M);
    return 0;
}