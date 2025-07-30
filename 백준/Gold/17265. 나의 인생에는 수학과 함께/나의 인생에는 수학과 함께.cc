#include <bits/stdc++.h>
#define ll long long
#define INF 1e9
using namespace std;
ll N, ans[10][10][2];
ll dir[4][4]={{0,-2,0,-1},{-1,-1,-1,0},{-1,-1,0,-1},{-2,0,-1,0}};
char arr[10][10];
ll f(ll x, char c, ll y){
    if (c=='+')
        return x+y;
    else if (c=='-')
        return x-y;
    else
        return x*y;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for (int i=0;i<N;i++){
        for (int j=0;j<N;j++)
            cin >> arr[i][j];
    }
    ans[0][0][0]=ans[0][0][1]=arr[0][0]-'0';
    for (int i=0;i<N;i++){
        for (int j=0;j<N;j++){
            if (i==0 && j==0)
                continue;
            if (arr[i][j]=='+' || arr[i][j]=='-' || arr[i][j]=='*')
                continue;
            ll mn=INF, mx=-INF;
            for (int k=0;k<4;k++){
                ll dx=i+dir[k][0], dy=j+dir[k][1];
                if (dx<0 || dy<0)
                    continue;
                mn=min(mn,f(ans[dx][dy][0],arr[i+dir[k][2]][j+dir[k][3]],arr[i][j]-'0'));
                mx=max(mx,f(ans[dx][dy][1],arr[i+dir[k][2]][j+dir[k][3]],arr[i][j]-'0'));
            }
            ans[i][j][0]=mn;
            ans[i][j][1]=mx;
        }
    }
    cout << ans[N-1][N-1][1] << " " << ans[N-1][N-1][0];
    return 0;
}