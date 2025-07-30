#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, M, cnt, dir[4][2]={{0,1},{0,-1},{1,0},{-1,0}}, ans;
string S[505];
void f(ll x, ll y){
    ll ret=1;
    for (int i=0;i<4;i++){
        ll tmp=0;
        for (int j=1;1;j++){
            ll dx=x+dir[i][0]*j, dy=y+dir[i][1]*j;
            if (dx<0 || dx>=N || dy<0 || dy>=M)
                break;
            if (S[dx][dy]!='*')
                break;
            tmp++;
        }
        if (!tmp)
            return;
        ret+=tmp;
    }
    if (ret==cnt)
        ans=1;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M;
    for (int i=0;i<N;i++)
        cin >> S[i];
    for (int i=0;i<N;i++){
        for (int j=0;j<M;j++){
            if (S[i][j]=='*')
                cnt++;
        }
    }
    for (int i=0;i<N;i++){
        for (int j=0;j<M;j++){
            if (S[i][j]=='*')
                f(i,j);
        }
    }
    cout << (ans ? "YES" : "NO");
    return 0;
}