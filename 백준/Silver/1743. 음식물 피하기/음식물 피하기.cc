#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;
int N, M, T, ans=0;
int arr[105][105], visit[105][105], dir[4][2]={{0,1},{0,-1},{1,0},{-1,0}};
int BFS(){
    queue<pair<int,int> > q;
    for (int i=0;i<N;i++){
        for (int j=0;j<M;j++){
            if (arr[i][j]==1 && visit[i][j]==0){
                int cnt=0;
                q.push(make_pair(i,j));
                visit[i][j]=1;
                while (!q.empty()){
                    cnt++;
                    int x=q.front().first;
                    int y=q.front().second;
                    q.pop();
                    for (int k=0;k<4;k++){
                        int ax=x+dir[k][0];
                        int ay=y+dir[k][1];
                        if (ax<0 || ax>=N || ay<0 || ay>=M)
                            continue;
                        if (arr[ax][ay]==1 && visit[ax][ay]==0){
                            visit[ax][ay]=1;
                            q.push(make_pair(ax,ay));
                        }
                    }
                }
                ans=max(ans,cnt);
            }
        }
    }
    return ans;
}
int main () {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> N >> M >> T;
    for (int i=0;i<T;i++){
        int a, b;
        cin >> a >> b;
        arr[a-1][b-1]=1;
    }
    cout << BFS();
    return 0;
}