#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, M, ans;
string S[55];
ll f(ll x, ll y){
    ll ret=0;
    for (ll i=0;i<min(N,M);i++){
        if (x+i>=N || y+i>=M)
            break;
        if (S[x][y]==S[x+i][y] && S[x][y]==S[x][y+i] && S[x][y]==S[x+i][y+i])
            ret=(i+1)*(i+1);
    }
    return ret;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M;
    for (ll i=0;i<N;i++)
        cin >> S[i];
    for (ll i=0;i<N;i++){
        for (ll j=0;j<M;j++)
            ans=max(ans,f(i,j));
    }
    cout << ans;
    return 0;
}