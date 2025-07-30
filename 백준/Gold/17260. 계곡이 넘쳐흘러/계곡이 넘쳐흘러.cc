#include <bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;
ll N, M, arr[200005], visited[200005], chk[200005];
vector<ll> v[200005];
ll DFS(ll x, ll water){
    ll ret=0;
    if (x==M)
        return 1;
    visited[x]=1;
    for (int i=0;i<v[x].size();i++){
        ll dx=v[x][i];
        ld dwater=arr[dx]+(water-arr[dx])/2;
        if (!visited[dx] && water>=arr[dx])
            ret=max(ret,DFS(dx,dwater));
    }
    visited[x]=0;
    return chk[x]=ret;
}
ll f(){
    fill(&chk[0],&chk[200004],-1);
    for (int i=1;i<=N;i++){
        if (i==M || arr[i]<arr[M])
            continue;
        if (chk[i]==0)
            continue;
        if (DFS(i, arr[i]))
            return 1;
    }
    return 0;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M;
    for (int i=1;i<=N;i++)
        cin >> arr[i];
    for (int i=0;i<N-1;i++){
        ll a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    cout << f();
    return 0;
}