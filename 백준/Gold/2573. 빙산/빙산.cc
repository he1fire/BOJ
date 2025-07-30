#include <bits/stdc++.h>
#define ll long long
using namespace std;
typedef pair<ll,ll> pll;
ll N, M, ans, arr[305][305], cnt[305][305], visited[305][305], dir[4][2]={{0,1},{0,-1},{1,0},{-1,0}};
queue<pll> q;
void melt(){
    fill(&cnt[0][0],&cnt[304][305],0);
    for (int i=0;i<N;i++){
        for (int j=0;j<M;j++){
            for (int k=0;k<4;k++){
                ll dx=i+dir[k][0], dy=j+dir[k][1];
                if (dx<0 || dx>=N || dy<0 || dy>=M)
                    continue;
                if (arr[dx][dy]==0)
                    cnt[i][j]++;
            }
        }
    }
    for (int i=0;i<N;i++){
        for (int j=0;j<M;j++){
            arr[i][j]-=cnt[i][j];
            if (arr[i][j]<0)
                arr[i][j]=0;
        }
    }
}
ll BFS(){
    ll ret=0;
    fill(&visited[0][0],&visited[304][305],0);
    for (int i=0;i<N;i++){
        for (int j=0;j<M;j++){
            if (arr[i][j]!=0 && visited[i][j]==0){
                ret++;
                visited[i][j]=1;
                q.push({i,j});
                while (!q.empty()){
                    ll x=q.front().first, y=q.front().second;
                    q.pop();
                    for (int k=0;k<4;k++){
                        ll dx=x+dir[k][0], dy=y+dir[k][1];
                        if (dx<0 || dx>=N || dy<0 || dy>=M)
                            continue;
                        if (arr[dx][dy]!=0 && visited[dx][dy]==0){
                            visited[dx][dy]=1;
                            q.push({dx,dy});
                        }
                    }
                }
            }
        }
    }
    return ret;
}
int main(){
    cin >> N >> M;
    for (int i=0;i<N;i++){
        for (int j=0;j<M;j++){
            cin >> arr[i][j];
        }
    }
    while (1){
        if (BFS()!=1){
            cout << (BFS()==0 ? 0 : ans);
            break;
        }
        melt();
        ans++;
    }
    return 0;
}