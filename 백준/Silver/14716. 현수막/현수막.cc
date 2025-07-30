#include <bits/stdc++.h>
#define ll long long
using namespace std;
typedef pair<ll,ll> pll;
ll N, M, arr[255][255], visited[255][255];
ll dir[8][2]={{-1,-1},{-1,0},{-1,1},{0,-1},{0,1},{1,-1},{1,0},{1,1}};
ll BFS(){
    ll ret=0;
    queue<pll> q;
    for (int i=0;i<N;i++){
        for (int j=0;j<M;j++){
            if (arr[i][j] && !visited[i][j]){
                ret++;
                q.push({i,j});
                visited[i][j]=1;
                while(!q.empty()){
                    ll x=q.front().first, y=q.front().second;
                    q.pop();
                    for (int k=0;k<8;k++){
                        ll dx=x+dir[k][0], dy=y+dir[k][1];
                        if (dx<0 || dy<0 || dx>=N || dy>=M)
                            continue;
                        if (!arr[dx][dy] || visited[dx][dy])
                            continue;
                        q.push({dx,dy});
                        visited[dx][dy]=1;
                    }
                }
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
        for (int j=0;j<M;j++)
            cin >> arr[i][j];
    }
    cout << BFS();
    return 0;
}