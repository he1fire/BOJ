#include <bits/stdc++.h>
#define ll long long
using namespace std;
typedef pair<ll,ll> pll;
ll T, N, M, visited[1005];
vector<pll> arr[1005];
ll DFS(ll x, ll y){
    ll ret=0, chk=0;
    for (int i=0;i<arr[x].size();i++){
        pll dx=arr[x][i];
        if (!visited[dx.first]){
            visited[dx.first]=1;
            chk=1;
            ret+=DFS(dx.first, dx.second);
        }
    }
    if (chk)
        return min(ret,y);
    else
        return y;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> T;
    while (T--){
        for (int i=0;i<1005;i++)
            arr[i].clear();
        fill(&visited[0],&visited[1004],0);
        cin >> N >> M;
        for (int i=0;i<M;i++){
            ll a, b, c;
            cin >> a >> b >> c;
            arr[a].push_back({b,c});
            arr[b].push_back({a,c});
        }
        visited[1]=1;
        if (N==1)
            cout << "0\n";
        else 
            cout << DFS(1, 1e9+7) << "\n";
    }
    return 0;
}