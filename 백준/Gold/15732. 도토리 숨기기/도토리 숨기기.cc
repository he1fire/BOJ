#include <bits/stdc++.h>
#define ll long long
using namespace std;
struct ABC{
    ll a, b, c;
};
ll T, N, M;
vector<ABC> v;
ll f(ll x){
    ll ret=0;
    for (int i=0;i<v.size();i++){
        if (x<v[i].a)
            continue;
        ret+=((min(x,v[i].b)-v[i].a)/v[i].c)+1;
    }
    return ret<M;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> T >> N >> M;
    for (int i=0;i<N;i++){
        ll a, b, c;
        cin >> a >> b >> c;
        v.push_back({a,b,c});
    }
    ll lo=0, hi=T;
    while (lo+1<hi){
        ll mid=(lo+hi)/2;
        if (f(mid))
            lo=mid;
        else
            hi=mid;
    }
    cout << hi;
    return 0;
}