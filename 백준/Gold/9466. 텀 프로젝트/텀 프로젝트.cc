#include <bits/stdc++.h>
#define ll long long
#define INF 1e9+7
using namespace std;
ll N, M, arr[100005], chk[100005], x;
ll f(ll st, ll now){
    if (st==now)
        return st;
    else if (chk[now]==-1)
        return -1;
    else if (chk[now]!=INF && chk[now]>0)
        return -1;
    else if (chk[now]==INF){
        x=now;
        return now;
    }
    chk[now]=INF;
    chk[now]=f(st,arr[now]);
    if (x==now)
        return -1;
    else
        return chk[now];
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    while (N--){
        ll ans=0;
        cin >> M;
        for (int i=1;i<=M;i++)
            cin >> arr[i];
        fill(&chk[0],&chk[100004],0);
        for (int i=1;i<=M;i++){
            x=0;
            if (!chk[i])
                chk[i]=f(i,arr[i]);
            ans+=(chk[i]==-1);
        }
        cout << ans << "\n";
    }
    return 0;
}