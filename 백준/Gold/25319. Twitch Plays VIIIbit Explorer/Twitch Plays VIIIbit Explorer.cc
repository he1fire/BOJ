#include <bits/stdc++.h>
#define ll long long
using namespace std;
typedef pair<ll,ll> pll;
ll N, M, K, chk[30], cnt, x, y;
string S, ans;
queue<pll> q[30];
ll f(){
    ll ret=1;
    for (int i=0;i<30;i++){
        if (q[i].size()<chk[i])
            return 0;
    }
    return 1;
}
void g(ll dx, ll dy){
    for (int i=0;i<dx-x;i++)
        ans+='D';
    for (int i=0;i<x-dx;i++)
        ans+='U';
    for (int i=0;i<dy-y;i++)
        ans+='R';
    for (int i=0;i<y-dy;i++)
        ans+='L';
    x=dx;
    y=dy;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M >> K;
    for (int i=0;i<N;i++){
        for (int j=0;j<M;j++){
            char a;
            cin >> a;
            q[a-'a'].push({i,j});
        }
    }
    cin >> S;
    for (int i=0;i<K;i++)
        chk[S[i]-'a']++;
    while (f()){
        cnt++;
        for (int i=0;i<K;i++){
            ll dx=q[S[i]-'a'].front().first, dy=q[S[i]-'a'].front().second;
            q[S[i]-'a'].pop();
            g(dx, dy);
            ans+='P';
        }
    }
    g(N-1, M-1);
    cout << cnt << " " << ans.size() << "\n" << ans;
    return 0;
}