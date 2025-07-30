#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, build[505], chk[505], ans[505];
vector<ll> arr[505];
void topologysort(){
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
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for (int i=1;i<=N;i++){
        cin >> build[i];
        while (1){
            ll a;
            cin >> a;
            if (a==-1)
                break;
            arr[a].push_back(i);
            chk[i]++;
        }
    }
    topologysort();
    for (int i=1;i<=N;i++){
        cout << ans[i] << "\n";
    }
    return 0;
}