#include <bits/stdc++.h>
#define ll long long
#define INF (1e9+7)
using namespace std;
typedef pair<ll,ll> pll;
struct ABC{ll x, y, depth;};
ll K, N, M, arr[205][205], visited[205][205][35];
ll dir1[4][2]={{0,1},{1,0},{0,-1},{-1,0}};
ll dir2[8][2]={{2,1},{2,-1},{-2,1},{-2,-1},{1,2},{-1,2},{1,-2},{-1,-2}};
ll BFS(){
    ll ret=INF;
    queue<ABC> q;
    fill(&visited[0][0][0],&visited[204][204][35],INF);
    visited[0][0][0]=0;
    q.push({0,0,0});
    while (!q.empty()){
        ll x=q.front().x, y=q.front().y, depth=q.front().depth;
        q.pop();
        for (int i=0;i<4;i++){
            ll dx=x+dir1[i][0], dy=y+dir1[i][1];
            if (dx<0 || dy<0 || dx>=M || dy>=N)
                continue;
            if (!arr[dx][dy] && visited[dx][dy][depth]==INF){
                visited[dx][dy][depth]=visited[x][y][depth]+1;
                q.push({dx,dy,depth});
            }
        }
        for (int i=0;i<8;i++){
            ll dx=x+dir2[i][0], dy=y+dir2[i][1];
            if (dx<0 || dy<0 || dx>=M || dy>=N)
                continue;
            if (!arr[dx][dy] && depth<K && visited[dx][dy][depth+1]==INF){
                visited[dx][dy][depth+1]=visited[x][y][depth]+1;
                q.push({dx,dy,depth+1});
            }
        }
    }
    for (int i=0;i<=K;i++)
        ret=min(ret,visited[M-1][N-1][i]);
    if (ret==INF || arr[0][0])
        return -1;
    return ret;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> K >> N >> M;
    for (int i=0;i<M;i++){
        for (int j=0;j<N;j++)
            cin >> arr[i][j];
    }
    cout << BFS();
    return 0;
}