#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, M, T, arr[1005], visited[1005];
vector<ll> v[1005];
ll DFS(ll x){
    visited[x]=1;
    for (auto y:v[x]){
        if (arr[y]==-1 || (!visited[arr[y]] && DFS(arr[y]))){
            arr[y]=x;
            return 1;
        }
    }
    return 0;
}
ll BipartiteMatching(){
    ll ret=0;
    fill(&arr[0],&arr[1004],-1);
    for (int i=0;i<M;i++){
        fill(&visited[0],&visited[1004],0);
        if (DFS(i))
            ret++;
    }
    return ret;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> T;
    while (T--){
        for (int i=0;i<1005;i++)
            v[i].clear();
        cin >> N >> M;
        for (int i=0;i<M;i++){
            ll a, b;
            cin >> a >> b;
            for (int j=a;j<=b;j++)
                v[i].push_back(j-1);
        }
        cout << BipartiteMatching() << "\n";
    }
    return 0;
}