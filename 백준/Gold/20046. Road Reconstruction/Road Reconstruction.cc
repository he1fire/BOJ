#include <bits/stdc++.h>
#define ll long long
#define INF 1e9+7
using namespace std;
struct ABC{
    ll x, y, dst;
    ABC() {}
    ABC(ll x, ll y, ll dst) : x(x), y(y), dst(dst) {}
};
bool operator<(ABC x, ABC y){
    return x.dst>y.dst;
}
ll N, M, arr[1005][1005], visited[1005][1005], dir[4][2]={{0,1},{1,0},{0,-1},{-1,0}};
priority_queue<ABC> pq;
ll Dijkstra(){
    if (arr[0][0]==-1)
        return -1;
    fill(&visited[0][0],&visited[1004][1005],INF);
    visited[0][0]=arr[0][0];
    pq.push({0,0,arr[0][0]});
    while (!pq.empty()){
        ll x=pq.top().x, y=pq.top().y, curr=pq.top().dst;
        pq.pop();
        if (curr>visited[x][y])
            continue;
        for (int i=0;i<4;i++){
            ll dx=x+dir[i][0], dy=y+dir[i][1];
            if (dx<0 || dx>=N || dy<0 || dy>=M)
                continue;
            ll next=arr[dx][dy];
            if (next!=-1 && curr+arr[dx][dy]<visited[dx][dy]){
                visited[dx][dy]=curr+next;
                pq.push({dx,dy,curr+next});
            }
        }
    }
    if (visited[N-1][M-1]==INF)
        return -1;
    return visited[N-1][M-1];
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M;
    for (int i=0;i<N;i++){
        for (int j=0;j<M;j++){
            cin >> arr[i][j];
        }
    }
    cout << Dijkstra();
    return 0;
}