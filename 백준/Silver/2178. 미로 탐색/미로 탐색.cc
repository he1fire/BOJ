#include <iostream>
#include <queue>
using namespace std;
int dir[4][2]={{1,0},{-1,0},{0,1},{0,-1}};
int visit[101][101];
char map[101][101];
int N, M;
int BFS() {
    int x=0, y=0;
    queue<pair<int, int> > Q;
    Q.push(make_pair(x,y));
    visit[x][y]=1;
    while (!Q.empty())
        {
        x=Q.front().first;
        y=Q.front().second;
        Q.pop();
        if (x==N && y==M)
        break;
        for (int i=0;i<4;i++)
            {
            int ax=x+dir[i][0];
            int ay=y+dir[i][1];
            if (map[ax][ay]=='1' && visit[ax][ay]==0)
                {
                visit[ax][ay]=visit[x][y]+1;
                Q.push(make_pair(ax,ay));
                }
            }
        }
    return visit[N-1][M-1];
    }
int main () {
    cin >> N >> M;
    for (int i=0;i<N;i++)
    cin >> map[i];
    cout << BFS();
    return 0;
    }