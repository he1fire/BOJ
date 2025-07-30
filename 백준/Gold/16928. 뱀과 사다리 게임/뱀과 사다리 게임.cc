#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, M, arr[105], visited[105];
ll BFS(){
    fill(&visited[0],&visited[104],-1);
    queue<ll> q;
    q.push(1);
    visited[1]=0;
    while (!q.empty()){
        ll x=q.front();
        q.pop();
        for (int i=1;i<=6;i++){
            ll dx=x+i;
            if (dx>100)
                continue;
            if (arr[dx])
                dx=arr[dx];
            if (visited[dx]==-1){
                q.push(dx);
                visited[dx]=visited[x]+1;
            }
        }
        if (visited[100]!=-1)
            break;
    }
    return visited[100];
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M;
    for (int i=0;i<N+M;i++){
        ll a, b;
        cin >> a >> b;
        arr[a]=b;
    }
    cout << BFS();
    return 0;
}