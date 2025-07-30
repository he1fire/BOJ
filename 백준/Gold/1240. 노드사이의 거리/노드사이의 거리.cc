#include <bits/stdc++.h>
#define ll long long
using namespace std;
typedef pair<ll,ll> pll;
ll N, M, visited[1005];
vector<pll> arr[1005];
queue<ll> q;
ll BFS(ll st, ll ed){
    fill(&visited[0],&visited[1004],-1);
    visited[st]=0;
    q.push(st);
    while (!q.empty()){
        ll x=q.front(), curr=visited[x];
        q.pop();
        for (int i=0;i<arr[x].size();i++){
            ll dx=arr[x][i].first, next=arr[x][i].second;
            if (visited[dx]==-1){
                visited[dx]=curr+next;
                q.push(dx);
            }
        }
    }
    return visited[ed];
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M;
    for (int i=0;i<N-1;i++){
        ll a, b, c;
        cin >> a >> b >> c;
        arr[a].push_back({b,c});
        arr[b].push_back({a,c});
    }
    while (M--){
        ll a, b;
        cin >> a >> b;
        cout << BFS(a,b) << "\n";
    }
    return 0;
}