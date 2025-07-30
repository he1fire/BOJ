#include <bits/stdc++.h>
#define ll long long
using namespace std;
typedef pair<ll,ll> pll;
ll N, M, K, ans;
vector<pll> v;
ll f(pll x, pll y){
    return x.first>y.first;
}
ll g(pll x, pll y){
    return x.second>y.second;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M >> K;
    for (int i=0;i<N;i++){
        ll a, b;
        cin >> a >> b;
        v.push_back({a,b});
    }
    sort(v.begin(),v.end(),g);
    for (int i=0;i<K;i++){
        ans+=v[i].first;
        v[i].first=-1;
    }
    sort(v.begin(),v.end(),f);
    for (int i=0;i<M;i++)
        ans+=v[i].first;
    cout << ans;
    return 0;
}