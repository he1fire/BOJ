#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, M, arr[1005], visited[2005];
vector<ll> v[2005];
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
    for (int i=0;i<N*2;i++){
        fill(&visited[0],&visited[2004],0);
        if (DFS(i))
            ret++;
    }
    return ret;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M;
    for (int i=0;i<N;i++){
        ll a, b;
        cin >> a;
        for (int j=0;j<a;j++){
            cin >> b;
            v[i*2].push_back(b-1);
            v[i*2+1].push_back(b-1);
        }
    }
    cout << BipartiteMatching();
    return 0;
}