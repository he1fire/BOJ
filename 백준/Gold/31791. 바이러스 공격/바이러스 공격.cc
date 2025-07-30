#include <bits/stdc++.h>
#define ll long long
#define INF (1e9+7)
using namespace std;
struct Edge{ll x, y, dst;};
bool operator<(Edge x, Edge y){
    return x.dst>y.dst;
}
ll N, M, A, B, C, D;
ll dir[4][2]={{0,1},{0,-1},{1,0},{-1,0}};
ll visited[1005][1005];
string S[1005];
void Dijkstra(){
    priority_queue<Edge> pq;
    for (int i=0;i<N;i++){
        for (int j=0;j<M;j++){
            if (S[i][j]=='*'){
                pq.push({i,j,0});
                visited[i][j]=0;
            }
            else
                visited[i][j]=INF;
        }
    }
    while (!pq.empty()){
        ll x=pq.top().x, y=pq.top().y, curr=pq.top().dst;
        pq.pop();
        if (curr>visited[x][y] || visited[x][y]>=A)
            continue;
        for (int i=0;i<4;i++){
            ll dx=x+dir[i][0], dy=y+dir[i][1];
            if (dx<0 || dy<0 || dx>=N || dy>=M)
                continue;
            if (S[dx][dy]=='.' && visited[dx][dy]>curr+1){
                visited[dx][dy]=curr+1;
                pq.push({dx,dy,curr+1});
            }
            else if (S[dx][dy]=='#' && visited[dx][dy]>curr+B+1){
                visited[dx][dy]=curr+B+1;
                pq.push({dx,dy,curr+B+1});
            }
        }
    }
    ll cnt=1;
    for (int i=0;i<N;i++){
        for (int j=0;j<M;j++){
            if (visited[i][j]>A){
                cout << i+1 << " " << j+1 << "\n";
                cnt=0;
            }
        }
    }
    if (cnt)
        cout << "-1";
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M >> A >> B >> C >> D;
    for (int i=0;i<N;i++)
        cin >> S[i];
    Dijkstra();
    return 0;
}