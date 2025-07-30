#include <iostream>
#include <queue>
using namespace std;
int N, M;
int arr[1005][1005], visit[1005][1005], dir[4][2]={{0,-1},{0,1},{1,0},{-1,0}};
struct AB {
    int a, b;
    AB() {}
    AB(int a, int b) : a(a), b(b) {}
};
void BFS(){
    queue<AB> q;
    fill(&visit[0][0], &visit[1004][1005], -1);
    for (int i=0;i<N;i++){
        int a=0;
        for (int j=0;j<M;j++){
            if (arr[i][j]==1){
                q.push(AB(i,j));
                visit[i][j]=0;
                a=1;
                break;
            }
        }
        if (a)
            break;
    }
    while(!q.empty()){
        int x=q.front().a, y=q.front().b;
        q.pop();
        for (int i=0;i<4;i++){
            int ax=x+dir[i][0], ay=y+dir[i][1];
            if (ax<0 || ax>=N || ay<0 || ay>=M)
                continue;
            if (visit[ax][ay]==-1){
                visit[ax][ay]=visit[x][y]+1;
                q.push(AB(ax,ay));
            }
        }
    }
}
int main () {
    cin >> N >> M;
    for (int i=0;i<N;i++){
        for (int j=0;j<M;j++)
            cin >> arr[i][j];
    }
    BFS();
    for (int i=0;i<N;i++){
        for (int j=0;j<M;j++){
            if (arr[i][j]==1 && visit[i][j]!=0)
                cout << visit[i][j];
        }
    }
    return 0;
}