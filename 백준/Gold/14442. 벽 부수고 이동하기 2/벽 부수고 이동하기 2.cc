#include <iostream>
#include <vector>
#include <string>
#include <queue>
using namespace std;
int N, M, K, ans=987654321, dir[4][2]={{1,0},{0,1},{0,-1},{-1,0}}, visit[1005][1005][15];
string arr[1005];
queue<pair<int,int> > q;
void BFS() {
    for (int i=0;i<N;i++){
        for (int j=0;j<M;j++){
            for (int k=0;k<K+1;k++)
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
            for (int j=0;j<K+1;j++){
                if (arr[dx][dy]=='0' && visit[dx][dy][j]==-1 && visit[x][y][j]!=-1){
                    visit[dx][dy][j]=visit[x][y][j]+1;
                    chk=1;
                }
                if (arr[dx][dy]=='1' && visit[dx][dy][j+1]==-1 && visit[x][y][j]!=-1){
                    visit[dx][dy][j+1]=visit[x][y][j]+1;
                    chk=1;
                }
            }
            if (chk)
                q.push({dx,dy});
        }
    }
}
int main () {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M >> K;
    for (int i=0;i<N;i++)
        cin >> arr[i];
    BFS();
    for (int i=0;i<K+1;i++){
        if (visit[N-1][M-1][i]!=-1)
            ans=min(ans,visit[N-1][M-1][i]);
    }
    ans!=987654321 ? cout << ans : cout << "-1";
    return 0;
}