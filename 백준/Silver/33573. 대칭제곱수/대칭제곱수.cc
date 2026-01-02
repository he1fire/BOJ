#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N;
set<ll> s;
bool f(ll x){
    ll tmp=floor(sqrt(x));
    return (tmp*tmp==x ? 1 : 0);
}
ll g(ll x){
    ll ret=0;
    for (;x;x/=10)
        ret=ret*10+x%10;
    return ret;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for (ll i=0;i<N;i++){
        ll a;
        cin >> a;
        cout << ((f(a) && f(g(a))) ? "YES\n" : "NO\n");
    }
    return 0;
}