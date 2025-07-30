#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, visited[50005];
queue<ll> q;
ll BFS(){
    for (int i=1;i*i<=N;i++){
        visited[i*i]=1;
        q.push(i*i);
    }
    while (!q.empty()){
        ll x=q.front();
        q.pop();
        for (int i=1;x+i*i<=N;i++){
            if (x+i*i>N)
                continue;
            if (visited[x+i*i]==0){
                visited[x+i*i]=visited[x]+1;
                q.push(x+i*i);
            }
        }
    }
    return visited[N];
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    cout << BFS();
    return 0;
}