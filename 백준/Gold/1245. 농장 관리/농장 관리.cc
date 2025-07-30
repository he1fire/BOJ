#include <bits/stdc++.h>
#define ll long long
using namespace std;
struct xy{ll x, y;};
ll N, M, arr[105][105], visited[105][105], dir[8][2]={{0,1},{0,-1},{1,0},{-1,0},{1,1},{-1,-1},{1,-1},{-1,1}};
ll BFS(){
    ll ret=0;
    for (int i=0;i<N;i++){
        for (int j=0;j<M;j++){
            if (!visited[i][j]){
                ll chk=1;
                queue<xy> q;
                q.push({i,j});
                visited[i][j]=1;
                while(!q.empty()){
                    ll x=q.front().x, y=q.front().y;
                    q.pop();
                    for (int i=0;i<8;i++){
                        ll dx=x+dir[i][0], dy=y+dir[i][1];
                        if (dx<0 || dx>=N || dy<0 || dy>=M)
                            continue;
                        if (!visited[dx][dy] && arr[x][y]==arr[dx][dy]){
                            q.push({dx,dy});
                            visited[dx][dy]=1;
                        }
                        else if (arr[x][y]<arr[dx][dy])
                            chk=0;
                    }
                }
                ret+=chk;
            }
        }
    }
    return ret;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M;
    for (int i=0;i<N;i++){
        for (int j=0;j<M;j++)
            cin >> arr[i][j];
    }
    cout << BFS();
    return 0;
}