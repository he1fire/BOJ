#include <bits/stdc++.h>
#define ll long long
#define INF 987654321
#define MOD 1000000007
using namespace std;
typedef pair<ll,ll> pll;
ll N, M, T, chk[100005], visit[100005];
vector<pll> arr[100005];
priority_queue<pll,vector<pll>, greater<pll> > pq;
ll DIK(){
    fill(&visit[0],&visit[100004],-1);
    pq.push({0,0});
    while (!pq.empty()){
        ll curr=pq.top().first, x=pq.top().second;
        pq.pop();
        if (visit[x]!=-1)
            continue;
        visit[x]=curr;
        for (ll i=0;i<arr[x].size();i++){
            ll next=arr[x][i].first, dx=arr[x][i].second;
            if (visit[dx]==-1 && chk[dx]==0){
                pq.push({curr+next,dx});
            }
        }
    }
    return visit[N-1];
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M;
    for (int i=0;i<N;i++)
        cin >> chk[i];
    chk[N-1]=0;
    for (int i=0;i<M;i++){
        ll a, b, c;
        cin >> a >> b >> c;
        arr[a].push_back({c,b});
        arr[b].push_back({c,a});
    }
    cout << DIK();
    return 0;

}