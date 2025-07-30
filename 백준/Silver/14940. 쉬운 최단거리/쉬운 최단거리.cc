#include <iostream>
#include <queue>
using namespace std;
int N, M, arr[1001][1001], visit[1001][1001], dir[4][2]={{0,1},{0,-1},{1,0},{-1,0}};
queue<pair<int,int> > q;
void BFS() {
    fill(&visit[0][0], &visit[1000][1001],-1);
    for (int i=0;i<N;i++){
        for (int j=0;j<M;j++){
            if (arr[i][j]==2){
                q.push(make_pair(i,j));
                visit[i][j]=0;
            }
        }
    }
    while(!q.empty()){
        int x=q.front().first;
        int y=q.front().second;
        q.pop();
        for (int i=0;i<4;i++){
            int ax=x+dir[i][0];
            int ay=y+dir[i][1];
            if (ax<0 || ax>=N || ay<0 || ay>=M)
                continue;
            if (arr[ax][ay]==1 && visit[ax][ay]==-1){
                visit[ax][ay]=visit[x][y]+1;
                q.push(make_pair(ax,ay));
            }
        }
    }
    
    for (int i=0;i<N;i++){
        for (int j=0;j<M;j++){
            if (visit[i][j]==-1 && arr[i][j]==0)
                cout << "0 ";
            else
                cout << visit[i][j] << " ";
        }
        cout << "\n";
    }
}
int main () {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> N >> M;
    for (int i=0;i<N;i++){
        for (int j=0;j<M;j++)
            cin >> arr[i][j];
    }
    BFS();
    return 0;
}