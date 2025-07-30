#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, M, arr[505][505], visited[505][505], mx, cnt;
ll dir[4][2]={{0,1},{0,-1},{1,0},{-1,0}};
ll f(ll x, ll y){
    ll ret=0;
    for (int i=0;i<4;i++){
        ll dx=x+dir[i][0], dy=y+dir[i][1];
        if (dx<0 || dx>=N || dy<0 || dy>=M)
            continue;
        if (arr[dx][dy] && !visited[dx][dy]){
            visited[dx][dy]=1;
            ret+=f(dx,dy);
        }
    }
    return ret+1;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M;
    for (int i=0;i<N;i++){
        for (int j=0;j<M;j++)
            cin >> arr[i][j];
    }
    for (int i=0;i<N;i++){
        for (int j=0;j<M;j++){
            if (arr[i][j] && !visited[i][j]){
                visited[i][j]=1;
                mx=max(f(i,j),mx);
                cnt++;
            }
        }
    }
    cout << cnt << "\n" << mx;
    return 0;
}