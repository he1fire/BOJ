#include <bits/stdc++.h>
#define ll long long
using namespace std;
typedef pair<ll,ll> pll;
ll N, M, K, visited[2005][2005], indegree[2005][2005], ans;
ll dir[4][2]={{0,1},{0,-1},{1,0},{-1,0}};
string S[2005];

void f(ll a, ll b){
    visited[a][b]=1;
    queue<pll> q;
    q.push({a,b});
    while (!q.empty()){
        ll x=q.front().first, y=q.front().second;
        q.pop();
        for (int i=0;i<4;i++){
            ll dx=x+dir[i][0], dy=y+dir[i][1];
            if (dx<0 || dy<0 || dx>=N || dy>=M)
                continue;
            indegree[dx][dy]--;
            if (indegree[dx][dy]<=0 && !visited[dx][dy]){
                q.push({dx,dy});
                S[dx][dy]='O';
                visited[dx][dy]=1;
            }
        }
    }
}

ll BFS(ll a, ll b){
    ll c=0, d=0;
    visited[a][b]=1;
    queue<pll> q;
    q.push({a,b});
    while (!q.empty()){
        ll x=q.front().first, y=q.front().second;
        q.pop();
        for (int i=0;i<4;i++){
            ll dx=x+dir[i][0], dy=y+dir[i][1];
            if (dx<0 || dy<0 || dx>=N || dy>=M)
                continue;
            if (S[dx][dy]=='O' && !visited[dx][dy]){
                q.push({dx,dy});
                visited[dx][dy]=1;
                c=max(c,dx);
                d=max(d,dy);
            }
        }
    }
    if (c-a+1>K && d-b+1>K)
        return (c-a+1)*(d-b+1);
    return 0;
}

int main(){ 
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> N >> M >> K;
    for (int i=0;i<N;i++)
        cin >> S[i];
    fill(&indegree[0][0],&indegree[2004][2005],2);
    for (int i=0;i<N;i++){
        for (int j=0;j<M;j++){
            if (S[i][j]=='O' && !visited[i][j])
                f(i,j);
        }
    }
    fill(&visited[0][0],&visited[2004][2005],0);
    for (int i=0;i<N;i++){
        for (int j=0;j<M;j++){
            if (S[i][j]=='O' && !visited[i][j])
                ans+=BFS(i,j);
        }
    }
    cout << ans;
    return 0;
}