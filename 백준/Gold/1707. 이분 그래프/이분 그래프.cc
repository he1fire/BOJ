#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll K, N, M, visited[20005];
vector<ll> arr[20005];
ll BFS(){
    fill(&visited[0],&visited[20004],-1);
    queue<ll> q;
    for (int i=1;i<=N;i++){
        if (visited[i]==-1){
            visited[i]=1;
            q.push(i);
            while (!q.empty()){
                ll x=q.front();
                q.pop();
                for (int j=0;j<arr[x].size();j++){
                    ll dx=arr[x][j];
                    if (visited[dx]==-1){
                        visited[dx]=(visited[x]+1)%2;
                        q.push(dx);
                    }
                    else if (visited[dx]!=(visited[x]+1)%2)
                        return 0;
                }
            }
        }
    }
    return 1;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> K;
    while (K--){
        cin >> N >> M;
        for (int i=1;i<=N;i++){
            arr[i].clear();
        }
        for (int i=0;i<M;i++){
            ll a, b;
            cin >> a >> b;
            arr[a].push_back(b);
            arr[b].push_back(a);
        }
        cout << (BFS() ? "YES\n" : "NO\n");
    }
    return 0;
}