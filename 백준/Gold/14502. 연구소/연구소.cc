#include <bits/stdc++.h>
#define ll long long
using namespace std;
typedef pair<ll,ll> pll;
ll N, M, arr[10][10], visited[10][10], ans=0, dir[4][2]={{0,1},{1,0},{0,-1},{-1,0}};
vector<ll> v;
vector<pll> wall;
queue<pll> q;
void BFS(){
    ll ret=0;
    fill(&visited[0][0],&visited[9][10],-1);
    for (int i=0;i<N;i++){
        for (int j=0;j<M;j++){
            if (arr[i][j]==2)
                q.push({i,j});
        }
    }
    while (!q.empty()){
        ll x=q.front().first, y=q.front().second;
        q.pop();
        for (int i=0;i<4;i++){
            ll ax=x+dir[i][0], ay=y+dir[i][1];
            if (ax<0 || ax>=N || ay<0 || ay>=M)
                continue;
            if (visited[ax][ay]==-1 && arr[ax][ay]==0){
                visited[ax][ay]=1;
                q.push({ax,ay});
            }
        }
    }
    for (int i=0;i<N;i++){
        for (int j=0;j<M;j++){
            if (arr[i][j]==0 && visited[i][j]==-1)
                ret++;
        }
    }
    ans=max(ans,ret);
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M;
    for (int i=0;i<N;i++){
        for (int j=0;j<M;j++)
            cin >> arr[i][j];
    }
    for (int i=0;i<3;i++)
        v.push_back(1);
    for (int i=0;i<N*M-3;i++)
        v.push_back(0);
    do {
        ll chk=0;
        for (int i=0;i<v.size();i++){
            if (v[i]==1){
                ll a=i/M, b=i%M;
                if (arr[a][b]==0){
                    wall.push_back({a,b});
                    chk++;
                }
            }
        }
        if (chk==3){
            for (auto i:wall)
                arr[i.first][i.second]=1;
            BFS();
            for (auto i:wall)
                arr[i.first][i.second]=0;

        }
        wall.clear();
    } while (prev_permutation(v.begin(),v.end()));
    cout << ans;
    return 0;
}