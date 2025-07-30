#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;
queue<pair<int,int> > q;
int dir[4][2]={{1,0},{-1,0},{0,1},{0,-1}};
int BFS (int N, int M, int K) {
    int cnt=0, arr[51][51]={0}, visit[51][51]={0};
    for (int i=0;i<K;i++){
        int a, b;
        cin >> a >> b;
        arr[a][b]=1;
    }
    for (int i=0;i<N;i++){
        for (int j=0;j<M;j++){
            if (visit[i][j]==0 && arr[i][j]==1){
                cnt++;
                visit[i][j]=1;
                q.push(make_pair(i,j));
                while(!q.empty()){
                    int x=q.front().first;
                    int y=q.front().second;
                    q.pop();
                    for (int k=0;k<4;k++){
                        int ax=x+dir[k][0];
                        int ay=y+dir[k][1];
                        if (ax<0 || ax>=N || ay<0 || ay>=M)
                            continue;
                        if (visit[ax][ay]==0 && arr[ax][ay]==1){
                            visit[ax][ay]=1;
                            q.push(make_pair(ax,ay));
                        }
                    }
                }
            }
        }
    }
    return cnt;
}
int main() {
    int T;
    cin >> T;
    for (int i=0;i<T;i++){
        int N, M, K, ans=0;
        cin >> N >> M >> K;
        ans=BFS(N,M,K);
        cout << ans << "\n";
    }
    return 0;
}