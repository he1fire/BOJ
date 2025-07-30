#include <bits/stdc++.h>
#define ll long long
#define INF 1e10+7
using namespace std;
ll N, M, arr[505][505], visited[505][505];
ll DP(ll x, ll y){
    if (visited[x][y]!=-1)
        return visited[x][y];
    else if (x==N-1 && y==M-1)
        return 1;
    else{
        ll ret=0, dir[4][2]={{0,1},{0,-1},{1,0},{-1,0}};
        for (int i=0;i<4;i++){
            ll dx=x+dir[i][0], dy=y+dir[i][1];
            if (dx<0 || dx>=N || dy<0 || dy>=M)
                continue;
            if (arr[dx][dy]<arr[x][y])
                ret+=DP(dx,dy);
        }
        return visited[x][y]=ret;
    }
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
    fill(&visited[0][0],&visited[504][505],-1);
    cout << DP(0,0);
    return 0;
}