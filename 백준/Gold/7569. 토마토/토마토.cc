#include <bits/stdc++.h>
#define ll long long
using namespace std;
struct ABC {
    ll x, y, z;
    ABC() {}
    ABC(ll x, ll y, ll z) : x(x), y(y), z(z) {}
};
ll N, M, T, arr[105][105][105], visited[105][105][105], ans=0;
ll dir[6][3]={{0,0,1},{0,0,-1},{1,0,0},{-1,0,0},{0,1,0},{0,-1,0}};
queue<ABC> q;
void BFS(){
    for (int i=0;i<T;i++){
        for (int j=0;j<M;j++){
            for (int k=0;k<N;k++){
                if (arr[j][k][i]==1){
                    q.push({j,k,i});
                    visited[j][k][i]=0;
                }
                if (arr[j][k][i]==-1)
                    visited[j][k][i]=0;
            }
        }
    }
    while (!q.empty()){
        ll x=q.front().x, y=q.front().y, z=q.front().z;
        q.pop();
        for (int i=0;i<6;i++){
            ll ax=x+dir[i][0], ay=y+dir[i][1], az=z+dir[i][2];
            if (ax<0 || ax>=M || ay<0 || ay>=N || az<0 || az>=T)
                continue;
            if (visited[ax][ay][az]==-1){
                visited[ax][ay][az]=visited[x][y][z]+1;
                q.push({ax,ay,az});
            }
        }
    }
}
int main(){
    cin >> N >> M >> T;
    for (int i=0;i<T;i++){
        for (int j=0;j<M;j++){
            for (int k=0;k<N;k++){
                cin >> arr[j][k][i];
                visited[j][k][i]=-1;
            }
        }
    }
    BFS();
    for (int i=0;i<T;i++){
        for (int j=0;j<M;j++){
            for (int k=0;k<N;k++){
                if (visited[j][k][i]==-1){
                    cout << "-1";
                    return 0;
                }
                ans=max(ans,visited[j][k][i]);
            }
        }
    }
    cout << ans;
    return 0;
}