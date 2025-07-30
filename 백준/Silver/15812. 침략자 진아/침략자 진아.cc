#include <bits/stdc++.h>
#define ll long long
#define INF 1e9+7
using namespace std;
typedef pair<ll,ll> pll;
ll N, M, visited[25][25], dir[4][2]={{1,0},{0,1},{-1,0},{0,-1}}, ans=INF;
string arr[25];
queue<pll> q;
ll BFS(ll st1, ll st2){
    ll ret=0;
    fill(&visited[0][0],&visited[24][25],-1);
    visited[st1/M][st1%M]=0;
    visited[st2/M][st2%M]=0;
    q.push({st1/M,st1%M});
    q.push({st2/M,st2%M});
    while (!q.empty()){
        ll x=q.front().first, y=q.front().second;
        q.pop();
        for (int i=0;i<4;i++){
            ll dx=x+dir[i][0], dy=y+dir[i][1];
            if (dx<0 || dx>=N || dy<0 || dy>=M)
                continue;
            if (visited[dx][dy]==-1){
                visited[dx][dy]=visited[x][y]+1;
                q.push({dx,dy});
                if (arr[dx][dy]=='1')
                    ret=max(ret,visited[dx][dy]);
            }
        }
    }
    return ret;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M;
    for (int i=0;i<N;i++){
        cin >> arr[i];
    }
    for (int i=0;i<N*M;i++){
        for (int j=i+1;j<N*M;j++){
            if (arr[i/M][i%M]=='0' && arr[j/M][j%M]=='0')
                ans=min(ans,BFS(i,j));
        }
    }
    cout << ans;
    return 0;
}