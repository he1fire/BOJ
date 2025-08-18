#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, arr[100005], visited[100005];
vector<ll> v[100005];
ll f(ll x){
    ll ret=arr[x];
    visited[x]=1;
    for (auto dx:v[x]){
        if (!visited[dx])
            ret+=max(f(dx),(ll)0);
    }
    return ret;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for (int i=0;i<N-1;i++){
        ll a, b;
        cin >> a >> b;
        v[a].push_back(b);
    }
    for (int i=0;i<N;i++)
        cin >> arr[i];
    cout << f(0);
    return 0;
}