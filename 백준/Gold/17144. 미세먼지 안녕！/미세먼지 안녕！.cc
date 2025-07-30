#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, M, T, arr[55][55], tmp[55][55], mc;
ll dir[4][2]={{0,1},{0,-1},{1,0},{-1,0}};
void canmove(ll x, ll y){
    ll cnt=0;
    for (int i=0;i<4;i++){
        ll dx=x+dir[i][0], dy=y+dir[i][1];
        if (dx<0 || dx>=N || dy<0 || dy>=M || ((dx==mc || dx==mc-1) && dy==0))
            continue;
        tmp[dx][dy]+=arr[x][y]/5;
        cnt++;
    }
    tmp[x][y]+=arr[x][y]-cnt*(arr[x][y]/5);
}
void dustmove(){
    fill(&tmp[0][0],&tmp[54][55],0);
    for (int i=0;i<N;i++){
        for (int j=0;j<M;j++){
            if (arr[i][j]>0)
                canmove(i,j);
        }
    }
    copy(&tmp[0][0],&tmp[54][55],&arr[0][0]);
    arr[mc][0]=arr[mc-1][0]=-1;
}
void airmove(){
    for (int i=mc-1;i>0;i--)
        arr[i][0]=arr[i-1][0];
    for (int i=mc;i<N-1;i++)
        arr[i][0]=arr[i+1][0];
    for (int i=0;i<M-1;i++){
        arr[0][i]=arr[0][i+1];
        arr[N-1][i]=arr[N-1][i+1];
    }
    for (int i=0;i<mc-1;i++)
        arr[i][M-1]=arr[i+1][M-1];
    for (int i=N-1;i>mc;i--)
        arr[i][M-1]=arr[i-1][M-1];
    for (int i=M-1;i>0;i--){
        arr[mc-1][i]=arr[mc-1][i-1];
        arr[mc][i]=arr[mc][i-1];
    }
    arr[mc][0]=arr[mc-1][0]=-1;
    arr[mc][1]=arr[mc-1][1]=0;
}
ll airclean(){
    ll ret=0;
    while (T--){
        dustmove();
        airmove();
    }
    for (int i=0;i<N;i++){
        for (int j=0;j<M;j++){
            if (arr[i][j]>0)
                ret+=arr[i][j];
        }
    }
    return ret;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M >> T;
    for (int i=0;i<N;i++){
        for (int j=0;j<M;j++){
            cin >> arr[i][j];
            if (arr[i][j]==-1)
                mc=i;
        }
    }
    cout << airclean();
    return 0;
}