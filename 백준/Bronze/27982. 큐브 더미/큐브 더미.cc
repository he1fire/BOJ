#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, M, arr[10][10][10], ans;
ll f(ll x, ll y, ll z){
    ll ret=0, dir[6][3]={{1,0,0},{-1,0,0},{0,1,0},{0,-1,0},{0,0,1},{0,0,-1}};
    for (int i=0;i<6;i++){
        ll dx=x+dir[i][0], dy=y+dir[i][1], dz=z+dir[i][2];
        if (arr[dx][dy][dz])
            ret++;
    }
    return ret==6;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M;
    while (M--){
        ll a, b, c;
        cin >> a >> b >> c;
        arr[a][b][c]=1;
    }
    for (int i=1;i<=N;i++){
        for (int j=1;j<=N;j++){
            for (int k=1;k<=N;k++){
                if (arr[i][j][k] && f(i,j,k))
                    ans++;
            }
        }
    }
    cout << ans;
    return 0;
}