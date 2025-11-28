#include <bits/stdc++.h>
#define ll long long
using namespace std;
struct st{
    ll x, y, dir;
};
ll N, M, arr[2005][2005], visited[2005][2005];
ll dir[4][2]={{-1,0},{0,1},{1,0},{0,-1}}; // 북 동 남 서
ll BFS(){
    ll ret=0;
    queue<st> q;
    for (ll i=0;i<N;i++){
        for (ll j=0;j<M;j++){
            if (arr[i][j]==9){
                visited[i][j]=1;
                for (ll k=0;k<4;k++)
                    q.push({i,j,k});
            }
        }
    }
    while (!q.empty()){
        st now=q.front();
        q.pop();
        ll dx=now.x+dir[now.dir][0], dy=now.y+dir[now.dir][1], next=now.dir;
        if (0>dx || dx>=N || 0>dy || dy>=M)
            continue;
        if (arr[dx][dy]==9)
            continue;
        visited[dx][dy]=1;
        if (arr[dx][dy]==1 && next%2==1)
            next=(next+2)%4;
        else if (arr[dx][dy]==2 && next%2==0)
            next=(next+2)%4;
        else if (arr[dx][dy]==3)
            next=next^1;
        else if (arr[dx][dy]==4)
            next=3-next;
        q.push({dx,dy,next});
    }
    for (ll i=0;i<N;i++){
        for (ll j=0;j<M;j++){
            if (visited[i][j])
                ret++;
        }
    }
    return ret;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M;
    for (ll i=0;i<N;i++){
        for (ll j=0;j<M;j++)
            cin >> arr[i][j];
    }
    cout << BFS();
    return 0;
}