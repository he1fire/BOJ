#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, M, V, visited[1005];
vector<ll> arr[1005];
void BFS(){
    fill(&visited[0], &visited[1004], -1);
    queue<ll> q;
    q.push(V);
    visited[V]=0;
    while (!q.empty()){
        ll x=q.front();
        q.pop();
        cout << x << " ";
        for (int i=0;i<arr[x].size();i++){
            if (visited[arr[x][i]]){
                q.push(arr[x][i]);
                visited[arr[x][i]]=0;
            }
        }
    }
}
void DFS(ll x){
    cout << x << " ";
    for (int i=0;i<arr[x].size();i++){
        if (visited[arr[x][i]]){
            visited[arr[x][i]]=0;
            DFS(arr[x][i]);
        }
    }
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M >> V;
    for (int i=0;i<M;i++){
        ll a, b;
        cin >> a >> b;
        arr[a].push_back(b);
        arr[b].push_back(a);
    }
    for (int i=1;i<=N;i++){
        sort(arr[i].begin(),arr[i].end());
        arr[i].erase(unique(arr[i].begin(), arr[i].end()), arr[i].end());
    }
    fill(&visited[0], &visited[1004], -1);
    visited[V]=0;
    DFS(V);
    cout << "\n";
    BFS();
    return 0;
}