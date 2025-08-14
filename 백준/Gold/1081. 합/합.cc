#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, M;
ll f(ll num){
    ll ret=0;
    vector<ll> v(1,0);
    for (int i=1;i<10;i++)
        v.push_back(v[i-1]+i);
    for (ll i=1;i<=num;i*=10){
        ll hi=num/(i*10), x=(num%(i*10))/i, lo=num%i;
        ret+=v[9]*i*hi;
        if (x)
            ret+=v[x-1]*i;
        ret+=x*(lo+1);
    }
    return ret;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M;
    cout << f(M)-f(N-1);
    return 0;
}