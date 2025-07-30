#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, M, ans, cnt=987654321, visited[1005];
vector<ll> arr[105];
ll BFS(ll a){
    ll ret=0;
    queue<ll> q;
    fill(&visited[0],&visited[1004],-1);
    q.push(a);
    visited[a]=0;
    while (!q.empty()){
        ll x=q.front();
        q.pop();
        for (auto ax:arr[x]){
            if (visited[ax]==-1){
                q.push(ax);
                visited[ax]=visited[x]+1;
            }
        }
    }
    for (int i=1;i<=N;i++)
        ret+=visited[i];
    return ret;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie();
    cin >> N >> M;
    for (int i=0;i<M;i++){
        ll a, b;
        cin >> a >> b;
        arr[a].push_back(b);
        arr[b].push_back(a);
    }
    for (int i=1;i<=N;i++){
        ll a=BFS(i);
        if (a<cnt){
            ans=i;
            cnt=a;
        }
    }
    cout << ans;
    return 0;
}