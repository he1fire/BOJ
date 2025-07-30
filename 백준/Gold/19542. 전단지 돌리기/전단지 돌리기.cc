#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, S, D;
vector<ll>arr[100005];
ll visit[100005], cnt[100005];
void DFS(ll now){
    for (ll i=0;i<arr[now].size();i++){
        if (!visit[arr[now][i]]){
            visit[arr[now][i]]=1;
            DFS(arr[now][i]);
            cnt[now]=max(cnt[now],cnt[arr[now][i]]+1);
        }
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> S >> D;
    for (ll i=0;i<N-1;i++){
        ll a, b;
        cin >> a >> b;
        arr[a].push_back(b);
        arr[b].push_back(a);
    }
    visit[S]=1;
    DFS(S);
    ll ans=0;
    for (ll i=1;i<=N;i++){
        if (cnt[i]>=D)
            ans++;
    }
    cout << max((ans-1)*2,(ll)0);
    return 0;
}