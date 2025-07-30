#include <bits/stdc++.h>
#define ll long long
using namespace std;
typedef pair<ll,ll> pll;
ll N, M, ans, visited[2005];
vector<ll> arr[2005];
queue<ll> q;
ll DFS(ll a, ll b){
    if (b==5)
        return ans=1;
    visited[a]=1;
    for (auto i:arr[a]){
        if (!visited[i])
            DFS(i,b+1);
        if (ans)
            return 1;
    }
    visited[a]=0;
    return 0;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M;
    for (int i=0;i<M;i++){
        ll a, b;
        cin >> a >> b;
        arr[a].push_back(b);
        arr[b].push_back(a);
    }
    for (int i=0;i<N;i++){
        fill(&visited[0],&visited[2004],0);
        if (DFS(i,1))
            break;
    }
    cout << ans;
    return 0;
}