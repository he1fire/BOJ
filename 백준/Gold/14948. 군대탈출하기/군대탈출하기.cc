#include <bits/stdc++.h>
#define ll long long
#define INF 1e9+7
using namespace std;
struct ABC{
    ll x, y, lv, jump;
    ABC() {}
    ABC(ll x, ll y, ll lv, ll jump) : x(x), y(y), lv(lv), jump(jump) {}
};
bool operator<(ABC x, ABC y){
    return x.lv>y.lv;
}
ll N, M, arr[105][105], visited[105][105][2];
ll dir[4][2]={{0,1},{1,0},{0,-1},{-1,0}};
priority_queue<ABC> pq;
ll Dijkstra(){
    fill(&visited[0][0][0],&visited[104][104][2],INF);
    visited[0][0][0]=arr[0][0];
    pq.push({0,0,arr[0][0],0});
    while (!pq.empty()){
        ll x=pq.top().x, y=pq.top().y, curr=pq.top().lv, chk=pq.top().jump;
        pq.pop();
        if (curr>visited[x][y][chk])
            continue;
        for (int i=0;i<4;i++){
            ll dx=x+dir[i][0], dy=y+dir[i][1];
            if (dx<0 || dx>=N || dy<0 || dy>=M)
                continue;
            ll next=arr[dx][dy];
            if (max(curr,next)<visited[dx][dy][chk]){
                visited[dx][dy][chk]=max(curr,next);
                pq.push({dx,dy,max(curr,next),chk});
            }
            if (!chk){
                dx+=dir[i][0], dy+=dir[i][1];
                if (dx<0 || dx>=N || dy<0 || dy>=M)
                    continue;
                next=arr[dx][dy];
                if (max(curr,next)<visited[dx][dy][chk+1]){
                    visited[dx][dy][chk+1]=max(curr,next);
                    pq.push({dx,dy,max(curr,next),chk+1});
                }
            }
        }
    }
    return min(visited[N-1][M-1][0],visited[N-1][M-1][1]);
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