#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, M, K, arr[1005], visited[1005];
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
    ll ret=0, chk=1;
    fill(&arr[0],&arr[1004],-1);
    for (int i=0;i<N;i++){
        fill(&visited[0],&visited[1004],0);
        if (DFS(i))
            ret++;
    }
    for (int i=chk;chk && K;){
        chk=0;
        for (int j=0;j<N;j++){
            fill(&visited[0],&visited[1004],0);
            if (DFS(j)){
                ret++;
                K--;
                chk=1;
            }
            if (!K)
                break;
        }
    }
    return ret;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M >> K;
    for (int i=0;i<N;i++){
        ll a, b;
        cin >> a;
        for (int j=0;j<a;j++){
            cin >> b;
            v[i].push_back(b-1);
        }
    }
    cout << BipartiteMatching();
    return 0;
}