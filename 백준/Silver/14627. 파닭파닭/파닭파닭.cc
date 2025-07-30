#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, M;
vector<ll> v;
ll f(ll x){
    ll ret=0, cnt=0; 
    for (auto i:v){
        if (x==0){
            cnt=M;
            ret+=i;
            continue;
        }
        cnt+=i/x;
        ret+=i%x;
    }
    if (cnt>=M)
        return (cnt-M)*x+ret;
    else
        return -1;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M;
    for (int i=0;i<N;i++){
        ll a;
        cin >> a;
        v.push_back(a);
    }
    ll lo=0, hi=1000000001;
    while (lo+1<hi){
        ll mid=(lo+hi)/2;
        if (f(mid)!=-1)
            lo=mid;
        else
            hi=mid;
    }
    cout << f(lo);
    return 0;
}