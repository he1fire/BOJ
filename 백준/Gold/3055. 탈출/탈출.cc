#include <bits/stdc++.h>
#define ll long long
#define INF 987654321
#define MOD 1000000007
using namespace std;
typedef pair<ll,ll> pll;
ll N, M, dir[4][2]={{0,1},{0,-1},{1,0},{-1,0}}, visited[55][55], water[55][55];
string arr[55];
queue<pll> q;
ll BFS(){
    fill(&visited[0][0], &visited[54][55], -1);
    fill(&water[0][0], &water[54][55], -1);
    for (int i=0;i<N;i++){
        for (int j=0;j<M;j++){
            if (arr[i][j]=='*'){
                q.push({i,j});
                water[i][j]=0;
            }
        }
    }
    while (!q.empty()){
        ll x=q.front().first, y=q.front().second;
        q.pop();
        for (int i=0;i<4;i++){
            ll ax=x+dir[i][0], ay=y+dir[i][1];
            if (ax<0 || ax>=N || ay<0 || ay>=M)
                continue;
            if (arr[ax][ay]=='.' && water[ax][ay]==-1){
                q.push({ax,ay});
                water[ax][ay]=water[x][y]+1;
            }
        }
    }
    for (int i=0;i<N;i++){
        for (int j=0;j<M;j++){
            if (arr[i][j]=='S'){
                q.push({i,j});
                visited[i][j]=0;
            }
        }
    }
    while (!q.empty()){
        ll x=q.front().first, y=q.front().second;
        q.pop();
        for (int i=0;i<4;i++){
            ll ax=x+dir[i][0], ay=y+dir[i][1];
            if (ax<0 || ax>=N || ay<0 || ay>=M)
                continue;
            if ((water[ax][ay]>visited[x][y]+1 || water[ax][ay]==-1) && visited[ax][ay]==-1 && arr[ax][ay]!='X'){
                q.push({ax,ay});
                visited[ax][ay]=visited[x][y]+1;
            }
        }
    }
    for (int i=0;i<N;i++){
        for (int j=0;j<M;j++){
            if (arr[i][j]=='D')
                return visited[i][j];
        }
    }
}
int main(){
    cin >> N >> M;
    for (int i=0;i<N;i++)
        cin >> arr[i];
    ll a=BFS();
    a==-1 ? cout << "KAKTUS" : cout << a;
    return 0;
}