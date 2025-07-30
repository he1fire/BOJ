#include <bits/stdc++.h>
#define ll long long
#define INF 987654321
#define MOD 1000000007
using namespace std;
typedef pair<ll,ll> pll;
ll N, M, T, ans, visit[1005];
vector<pll> arr[1005];
ll DIK(ll S, ll E){
    priority_queue<pll,vector<pll>,greater<pll> > pq;
    fill(&visit[0],&visit[1004],-1);
    pq.push({0,S});
    while (!pq.empty()){
        ll curr=pq.top().first, x=pq.top().second;
        pq.pop();
        if (visit[x]!=-1)
            continue;
        visit[x]=curr;
        for (ll i=0;i<arr[x].size();i++){
            ll next=arr[x][i].first, dx=arr[x][i].second;
            if (visit[dx]==-1){
                pq.push({curr+next,dx});
            }
        }
    }
    return visit[E];
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M >> T;
    for (int i=0;i<M;i++){
        ll a, b, c;
        cin >> a >> b >> c;
        arr[a].push_back({c,b});
    }
    for (int i=1;i<=N;i++)
        ans=max(ans,DIK(i,T)+DIK(T,i));
    cout << ans;
    return 0;
}