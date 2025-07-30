#include <bits/stdc++.h>
#define ll long long
using namespace std;
typedef pair<ll,ll> pll;
ll N, M, visited[605][605], ans;
ll dir[4][2]={{0,1},{0,-1},{1,0},{-1,0}};
string arr[605];
void BFS(){
    queue<pll> q;
    for (int i=0;i<N;i++){
        for (int j=0;j<M;j++){
            if (arr[i][j]=='I'){
                q.push({i,j});
                visited[i][j]=1;
            }
        }
    }
    while (!q.empty()){
        ll x=q.front().first, y=q.front().second;
        q.pop();
        for (int i=0;i<4;i++){
            ll dx=x+dir[i][0], dy=y+dir[i][1];
            if (dx<0 || dx>=N || dy<0 || dy>=M)
                continue;
            if (arr[dx][dy]!='X' && !visited[dx][dy]){
                visited[dx][dy]=1;
                q.push({dx,dy});
                if (arr[dx][dy]=='P')
                    ans++;
            }
        }
    }
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M;
    for (int i=0;i<N;i++)
        cin >> arr[i];
    BFS();
    ans ? (cout << ans) : (cout << "TT");
    return 0;
}