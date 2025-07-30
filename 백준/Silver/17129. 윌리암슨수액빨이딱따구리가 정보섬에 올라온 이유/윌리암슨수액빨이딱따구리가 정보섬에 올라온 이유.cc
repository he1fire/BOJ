#include <iostream>
#include <queue>
using namespace std;
int dir[4][2]={{0,1},{0,-1},{1,0},{-1,0}};
int visit[3001][3001];
char arr[3001][3001];
int N, M, ans=0;
int BFS() {
    queue<pair<int, int> > q;
    for (int i=0;i<N;i++){
        int cnt=0;
        for (int j=0;j<M;j++){
            if (arr[i][j]=='2'){
                q.push(make_pair(i,j));
                visit[i][j]=1;
                cnt=1;
            }
            if (cnt)
                break;
        }
        if (cnt)
            break;
    }
    while (!q.empty()){
        int x=q.front().first;
        int y=q.front().second;
        q.pop();
        for (int i=0;i<4;i++){
            int ax=x+dir[i][0];
            int ay=y+dir[i][1];
            if (ax>=0 && ax<N && ay>=0 && ay<M){
                if (arr[ax][ay]=='0' && visit[ax][ay]==0){
                    visit[ax][ay]=visit[x][y]+1;
                    q.push(make_pair(ax,ay));
                }
                else if (arr[ax][ay]!='1' && visit[ax][ay]==0){
                    visit[ax][ay]=visit[x][y]+1;
                    ans=visit[ax][ay];
                }
            }
        }
        if (ans)
            break;
    }
    ans ? cout << "TAK\n" << ans-1 : cout << "NIE";
    return 0;
}
int main() {
    cin >> N >> M;
    for (int i=0;i<N;i++){
        cin >> arr[i];
    }
    BFS();
    return 0;
}