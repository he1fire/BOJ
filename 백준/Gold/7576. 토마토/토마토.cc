#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;
int N, M, ans=0, adj[1001][1001], visit[1001][1001];
int dir[4][2]={{0,1},{0,-1},{1,0},{-1,0}};
queue<pair<int, int> > Q;
int BFS () {
    int x=0, y=0;
    for (int i=0;i<N;i++)
        {
        for (int j=0;j<M;j++)
            {
            if (adj[i][j]==1)
                {
                Q.push(make_pair(i,j));
                visit[i][j]=1;
                }
            if (adj[i][j]==-1)
            visit[i][j]=1;
            }
        }
    while (!Q.empty())
        {
        x=Q.front().first;
        y=Q.front().second;
        Q.pop();
        for (int i=0;i<4;i++)
            {
            int ax=x+dir[i][0];
            int ay=y+dir[i][1];
            if (ax<0 || ax>=N || ay<0 || ay>=M)
            continue;
            if (adj[ax][ay]==0 && visit[ax][ay]==0)
                {
                visit[ax][ay]=visit[x][y]+1;
                Q.push(make_pair(ax,ay));
                }
            }
        }
    for (int i=0;i<N;i++)
        {
        for (int j=0;j<M;j++)
            {
            if (visit[i][j]==0)
                {
                ans=0;
                break;
                }
            ans=max(ans,visit[i][j]);
            }
        if (ans==0)
        break;
        }
    return ans-1;
    }
int main () {
    cin >> M >> N;
    for (int i=0;i<N;i++)
        {
        for (int j=0;j<M;j++)
        cin >> adj[i][j];
        }
    cout << BFS();
    return 0;
    }