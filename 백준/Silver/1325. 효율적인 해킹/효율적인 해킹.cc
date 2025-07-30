#include <bits/stdc++.h>
#define ll long long
using namespace std;
typedef pair<ll,ll> pll;
ll N, M, visited[10005];
vector<ll> arr[10005];
vector<pll> v;
queue<ll> q;
bool cmp(pll a, pll b){
    if (a.first>b.first) return 1;
    else if (a.first<b.first) return 0;
    else if (a.second<b.second) return 1;
    else return 0;
}
ll BFS(int a){
    ll ret=0;
    fill(&visited[0],&visited[10004],0);
    q.push(a);
    visited[a]=1;
    while (!q.empty()){
        ll x=q.front();
        q.pop();
        for (auto ax:arr[x]){
            if (!visited[ax]){
                q.push(ax);
                visited[ax]=1;
            }
        }
    }
    for (int i=1;i<=N;i++){
        if (visited[i])
            ret++;
    }
    return ret;
}
int main(){
    cin >> N >> M;
    for (int i=0;i<M;i++){
        ll a, b;
        cin >> a >> b;
        arr[b].push_back(a);
    }
    for (int i=1;i<=N;i++){
        pll a={BFS(i),i};
        v.push_back(a);
    }
    sort(v.begin(),v.end(),cmp);
    ll a=v[0].first;
    for (auto i:v){
        if (i.first==a)
            cout << i.second << " ";
        else
            break;
    }
    return 0;
}