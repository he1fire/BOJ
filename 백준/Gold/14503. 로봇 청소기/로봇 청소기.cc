#include <bits/stdc++.h>
#define ll long long
using namespace std;
typedef pair<ll,ll> pll;
ll N, M, arr[55][55], visited[55][55];
ll r, c, d, dir[4][2]={{-1,0},{0,1},{1,0},{0,-1}};

ll chkclean(){
    ll ret=1;
    for (int i=0;i<4;i++){
        ll dx=r+dir[i][0], dy=c+dir[i][1];
        if (!visited[dx][dy] && !arr[dx][dy])
            ret=0;
    }
    return ret;

}
ll moving(ll x){
    if (x==1){
        d=(d+3)%4;
        ll dx=r+dir[d][0], dy=c+dir[d][1];
        if (!visited[dx][dy] && !arr[dx][dy]){
            r=dx;
            c=dy;
        }
    }
    else{
        ll dd=(d+2)%4;
        ll dx=r+dir[dd][0], dy=c+dir[dd][1];
        if (!arr[dx][dy]){
            r=dx;
            c=dy;
        }
        else
            return 0;
    }
    return 1;
}
ll robot(){
    ll ret=0;
    while (1){
        if (!visited[r][c]){
            visited[r][c]=1;
            ret++;
        }
        else if (chkclean()){
            if (!moving(-1))
                break;
        }
        else
            moving(1);
    }
    return ret;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M;
    cin >> r >> c >> d;
    for (int i=0;i<N;i++){
        for (int j=0;j<M;j++)
            cin >> arr[i][j];
    }
    cout << robot();
    return 0;
}