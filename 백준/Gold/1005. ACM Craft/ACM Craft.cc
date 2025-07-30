#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll T, N, M, build[1005], chk[1005], ans[1005];
vector<ll> arr[1005];
ll TopologySort(ll ret){
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
    return ans[ret];
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> T;
    while (T--){
        fill(&build[0],&build[1004],0);
        fill(&ans[0],&ans[1004],0);
        for (int i=0;i<1005;i++){
            arr[i].clear();
        }
        ll W;
        cin >> N >> M;
        for (int i=1;i<=N;i++){
            cin >> build[i];
        }
        for (int i=0;i<M;i++){
            ll a, b;
            cin >> a >> b;
            arr[a].push_back(b);
            chk[b]++;
        }
        cin >> W;
        cout << TopologySort(W) << "\n";
    }
    return 0;
}