#include <bits/stdc++.h>
#define ll long long
using namespace std;
struct st{
    ll t, s, idx;
    bool operator<(st& tmp){
        if (t!=tmp.t)
            return t<tmp.t;
        return idx<tmp.idx;
    }
};
ll N, M, K, arr[100005], ans[100005];
vector<st> v;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M >> K;
    while (K--){
        ll a, b, c;
        cin >> a >> b >> c;
        v.push_back({a,b,c});
    }
    sort(v.begin(),v.end());
    for (auto x:v){
        if (!arr[x.s]){
            arr[x.s]=x.idx;
            arr[ans[x.idx]]=0;
            ans[x.idx]=x.s;
        }
    }
    for (ll i=1;i<=N;i++){
        if (ans[i])
            cout << i << " " << ans[i] << "\n";
    }
    return 0;
}