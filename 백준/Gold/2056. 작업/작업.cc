#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, M, build[10005], chk[10005], ans[10005];
vector<ll> arr[10005];
ll TopologySort(){
    ll ret=0;
    queue<ll> q;
    for (int i=1;i<=N;i++){
        if (chk[i]==0)
            q.push(i);
    }
    for (int i=1;i<=N;i++){
        ll x=q.front();
        q.pop();
        ans[x]+=build[x];
        for (int j=0;j<arr[x].size();j++){
            ll dx=arr[x][j];
            ans[dx]=max(ans[x],ans[dx]);
            if (--chk[dx]==0)
                q.push(dx);
        }
    }
    for (int i=1;i<=N;i++){
        ret=max(ans[i],ret);
    }
    return ret;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for (int i=1;i<=N;i++){
        cin >> build[i];
        cin >> M;
        for (int j=0;j<M;j++){
            ll a;
            cin >> a;
            arr[a].push_back(i);
            chk[i]++;
        }
    }
    cout << TopologySort();
    return 0;
}