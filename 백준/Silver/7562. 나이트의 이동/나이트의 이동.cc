#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;
int dir[8][2]={{2,1},{2,-1},{-2,1},{-2,-1},{1,2},{1,-2},{-1,2},{-1,-2}};
void BFS(int X, int ax, int ay, int bx, int by){
    queue<pair<int,int> > q;
    int arr[305][305]={0};
    arr[ax][ay]=1;
    q.push(make_pair(ax,ay));
    while (!q.empty()){
        int x=q.front().first;
        int y=q.front().second;
        q.pop();
        for (int i=0;i<8;i++){
            int dx=x+dir[i][0];
            int dy=y+dir[i][1];
            if (dx<0 || dx>=X || dy<0 || dy>=X)
                continue;
            if (arr[dx][dy]==0){
                arr[dx][dy]=arr[x][y]+1;
                q.push(make_pair(dx,dy));
            }
        }
        if (arr[bx][by])
            break;
    }
    cout << arr[bx][by]-1 << "\n";
}
int main() {
    int N;
    cin >> N;
    for (int i=0;i<N;i++){
        int X, ax, ay, bx, by;
        cin >> X >> ax >> ay >> bx >> by;
        BFS(X,ax,ay,bx,by);
    }
    return 0;
}