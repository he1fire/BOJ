#include <bits/stdc++.h>
#define ll long long
using namespace std;
struct xy{
    ll x, y;
};
struct st{
    xy dot[4];
};
ll N, M, arr[505][505], ans;
st dir[5]={{{{0,0},{0,1},{0,2},{0,3}}},{{{0,0},{0,1},{1,0},{1,1}}},{{{0,0},{1,0},{2,0},{2,1}}},{{{0,0},{1,0},{1,1},{2,1}}},{{{0,0},{0,1},{0,2},{1,1}}}};
st g(ll a, ll b, ll c){
    st ret=dir[a];
    for (ll i=0;i<b;i++){
        for (ll j=0;j<4;j++){
            ll xx=ret.dot[j].x, yy=ret.dot[j].y;
            ret.dot[j].x=yy;
            ret.dot[j].y=-xx;
        }
    }
    if (c){
        for (ll i=0;i<4;i++)
            ret.dot[i].x=-ret.dot[i].x;
    }
    return ret;
}
ll f(ll x, ll y){
    ll ret=0;
    for (ll i=0;i<5;i++){
        for (ll j=0;j<4;j++){
            for (ll k=0;k<2;k++){
                st tmp=g(i,j,k);
                ll cnt=0;
                for (ll l=0;l<4;l++){
                    ll dx=x+tmp.dot[l].x, dy=y+tmp.dot[l].y;
                    if (dx<0 || dy<0 || dx>=N || dy>=M){
                        cnt=-1;
                        break;
                    }
                    cnt+=arr[dx][dy];
                }
                ret=max(ret,cnt);
            }
        }
    }
    return ret;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M;
    for (ll i=0;i<N;i++){
        for (ll j=0;j<M;j++)
            cin >> arr[i][j];
    }
    for (ll i=0;i<N;i++){
        for (ll j=0;j<M;j++)
            ans=max(ans,f(i,j));
    }
    cout << ans;
    return 0;
}