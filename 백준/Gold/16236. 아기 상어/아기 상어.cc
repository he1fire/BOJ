#include <bits/stdc++.h>
#define ll long long
#define INF 1e9+7
using namespace std;
typedef pair<ll,ll> pll;
struct ABC{
    ll x, y, dst, lv, cnt;
};
ll N, arr[25][25], visited[25][25], ans;
ll dir[4][2]={{0,1},{1,0},{0,-1},{-1,0}};
ABC shark, fish;
ll scan(){
    fish.dst=INF;
    fill(&visited[0][0],&visited[24][25],-1);
    queue<pll> q;
    q.push({shark.x,shark.y});
    visited[shark.x][shark.y]=0;
    while (!q.empty()){
        ll x=q.front().first, y=q.front().second;
        q.pop();
        for (int i=0;i<4;i++){
            ll dx=x+dir[i][0], dy=y+dir[i][1];
            if (dx<0 || dx>=N || dy<0 || dy>=N)
                continue;
            if (visited[dx][dy]==-1 && arr[dx][dy]<=shark.lv){
                visited[dx][dy]=visited[x][y]+1;
                q.push({dx,dy});
                if (0<arr[dx][dy] && arr[dx][dy]<shark.lv){
                    if (visited[dx][dy]<fish.dst)
                        fish.x=dx, fish.y=dy, fish.dst=visited[dx][dy];
                    else if (visited[dx][dy]==fish.dst){
                        if (dx<fish.x || (dx==fish.x && dy<fish.y))
                            fish.x=dx, fish.y=dy;
                    }
                }
            }
        }
    }
    if (fish.dst==INF)
        return 0;
    ans+=fish.dst;
    shark.x=fish.x;
    shark.y=fish.y;
    shark.cnt++;
    if (shark.cnt==shark.lv){
        shark.lv++;
        shark.cnt=0;
    }
    arr[shark.x][shark.y]=0;
    return 1;
}
int main(){
    cin >> N;
    shark.lv=2;
    for (int i=0;i<N;i++){
        for (int j=0;j<N;j++){
            cin >> arr[i][j];
            if (arr[i][j]==9)
                shark.x=i, shark.y=j, arr[i][j]=0;
        }
    }
    while(scan());
    cout << ans;
    return 0;
}