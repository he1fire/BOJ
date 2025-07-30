#include <iostream>
#include <vector>
#include <string>
#include <queue>
using namespace std;
int N, M, dir[4][2]={{1,0},{0,1},{0,-1},{-1,0}}, visit[1005][1005][2];
string arr[1005];
queue<pair<int,int> > q;
void BFS() {
    for (int i=0;i<N;i++){
        for (int j=0;j<M;j++){
            for (int k=0;k<2;k++)
                visit[i][j][k]=-1;
        }
    }
    visit[0][0][0]=1;
    q.push({0,0});
    while (!q.empty()){
        int x=q.front().first, y=q.front().second;
        q.pop();
        for (int i=0;i<4;i++){
            int dx=x+dir[i][0], dy=y+dir[i][1], chk=0;
            if (dx<0 || dx>=N || dy<0 || dy>=M)
                continue;
            if (arr[dx][dy]=='0' && visit[dx][dy][0]==-1 && visit[x][y][0]!=-1){
                visit[dx][dy][0]=visit[x][y][0]+1;
                chk=1;
            }
            if (arr[dx][dy]=='0' && visit[dx][dy][1]==-1 && visit[x][y][1]!=-1){
                visit[dx][dy][1]=visit[x][y][1]+1;
                chk=1;
            }
            if (arr[dx][dy]=='1' && visit[dx][dy][1]==-1 && visit[x][y][0]!=-1){
                visit[dx][dy][1]=visit[x][y][0]+1;
                chk=1;
            }
            if (chk)
                q.push({dx,dy});
        }
    }
}
int main () {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M;
    for (int i=0;i<N;i++)
        cin >> arr[i];
    BFS();
    visit[N-1][M-1][0]*visit[N-1][M-1][1]>0 ? cout << min(visit[N-1][M-1][0],visit[N-1][M-1][1]) : cout << max(visit[N-1][M-1][0],visit[N-1][M-1][1]);
    return 0;
}