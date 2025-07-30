#include <bits/stdc++.h>
#define ll long long
#define INF 987654321
using namespace std;
typedef pair<ll,ll> pll;
ll N, M, T, arr[105][105], visited[105][105], ans=INF, dir[4][2]={{0,1},{1,0},{-1,0},{0,-1}};
queue<pll> q;
void BFS(){
    q.push({0,0});
    fill(&visited[0][0],&visited[104][105],-1);
    visited[0][0]=0;
    while (!q.empty()){
        ll x=q.front().first, y=q.front().second;
        q.pop();
        for (int i=0;i<4;i++){
            ll ax=x+dir[i][0], ay=y+dir[i][1];
            if (ax<0 || ax>=N || ay<0 || ay>=M)
                continue;
            if (visited[ax][ay]==-1 && arr[ax][ay]!=1){
                q.push({ax,ay});
                visited[ax][ay]=visited[x][y]+1;
                if (arr[ax][ay]==2)
                    ans=visited[ax][ay]+(N-1-ax)+(M-1-ay);
            }
        }
    }
    if (visited[N-1][M-1]!=-1)
        ans=min(ans,visited[N-1][M-1]);
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M >> T;
    for (int i=0;i<N;i++){
        for (int j=0;j<M;j++)
            cin >> arr[i][j];
    }
    BFS();
    ans>T ? cout << "Fail" : cout << ans;
    return 0;
}