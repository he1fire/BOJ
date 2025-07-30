#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, M, L, chk, lo=1, hi=1001;
vector<ll> arr, v;
ll f(ll x){
    ll cnt=0;
    for (int i=0;i<arr.size();i++){
        if (arr[i]>=x){
            if (arr[i]%x)
                cnt+=(arr[i]/x);
            else
                cnt+=(arr[i]/x)-1;
        }
    }
    if (cnt>M)
        return 1;
    return 0;
}
int main(){
    cin >> N >> M >> L;
    for (int i=0;i<N;i++){
        ll a;
        cin >> a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    for (int i=0;i<N;i++){
        arr.push_back(v[i]-chk);
        chk=v[i];
    }
    arr.push_back(L-chk);
    for (int i=0;i<10;i++){
        ll mid=(lo+hi)/2;
        if (f(mid))
            lo=mid;
        else
            hi=mid;
    }
    cout << hi;
    return 0;
}