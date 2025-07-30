#include <bits/stdc++.h>
#define ll long long
using namespace std;
typedef pair<ll,ll> pll;
ll B, N, M, belt[105][105], ans;
pll arr[105][105];
void move(){
    for (int i=0;i<B-1;i++)
        belt[B-1][i]=belt[B-1][i+1];
    for (int i=B-1;i>0;i--)
        belt[i][B-1]=belt[i-1][B-1];
    for (int i=B-1;i>0;i--)
        belt[0][i]=belt[0][i-1];
    belt[0][0]=0;
}
ll chk(){
    ll ret=0;
    for (int i=0;i<B;i++){
        for (int j=0;j<B;j++){
            if (!arr[i][j].first)
                continue;
            if (arr[i][j].second)
                arr[i][j].second--;
            else{
                ll dir[3][2]={{1,0},{0,1},{-1,0}};
                for (int k=0;k<3;k++){
                    ll dx=i+dir[k][0], dy=j+dir[k][1];
                    if (dx<0 || dx>=B || dy<0 || dy>=B)
                        continue;
                    if (belt[dx][dy]){
                        ret++;
                        belt[dx][dy]=0;
                        arr[i][j].second=arr[i][j].first-1;
                        break;
                    }
                }
            }
        }
    }
    return ret;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> B >> N >> M;
    for (int i=0;i<N;i++){
        ll a, b, c;
        cin >> a >> b >> c;
        arr[a][b]={c,0};
    }
    for (ll i=0;i<M+B*3;i++){
        move();
        if (i<M)
            belt[0][0]=1;
        ans+=chk();
    }
    cout << ans;
    return 0;
}