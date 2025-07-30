#include <iostream>
#include <queue>
using namespace std;
char arr[105][105];
int dir[4][2]={{-1,0},{1,0},{0,1},{0,-1}}, N;
queue<pair<int, int> > q;
void BFS() {
    int cnt=0, visit[105][105]={0};
    for (int i=0;i<N;i++){
        for (int j=0;j<N;j++){
            if (visit[i][j]==0){
                visit[i][j]=1;
                cnt++;
                q.push(make_pair(i,j));
                while (!q.empty()){
                    int x=q.front().first;
                    int y=q.front().second;
                    q.pop();
                    for (int k=0;k<4;k++){
                        int ax=x+dir[k][0];
                        int ay=y+dir[k][1];
                        if (ax<0 || ax>=N || ay<0 || ay>=N)
                            continue;
                        if (arr[x][y]==arr[ax][ay] && visit[ax][ay]==0){
                            visit[ax][ay]=1;
                            q.push(make_pair(ax,ay));
                        }
                    }
                }
            }
        }
    }
    cout << cnt << " ";
}
int main() {
    cin >> N;
    for (int i=0;i<N;i++)
        cin >> arr[i];
    BFS();
    for (int i=0;i<N;i++){
        for (int j=0;j<N;j++){
            if (arr[i][j]=='G')
                arr[i][j]='R';
        }
    }
    BFS();
    return 0;
}