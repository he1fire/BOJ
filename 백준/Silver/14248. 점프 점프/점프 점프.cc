#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, st, arr[100005], visited[100005];
ll BFS(){
    ll ret=0;
    queue<ll> q;
    q.push(st);
    visited[st]=1;
    while (!q.empty()){
        ll x=q.front();
        q.pop();
        if (x-arr[x]>0 && !visited[x-arr[x]]){
            q.push(x-arr[x]);
            visited[x-arr[x]]=1;
        }
        if (x+arr[x]<=N && !visited[x+arr[x]]){
            q.push(x+arr[x]);
            visited[x+arr[x]]=1;
        }
        ret++;
    }
    return ret;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for (int i=1;i<=N;i++)
        cin >> arr[i];
    cin >> st;
    cout << BFS();
    return 0;
}