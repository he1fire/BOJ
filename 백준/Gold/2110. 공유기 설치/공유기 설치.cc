#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, M;
vector<ll> arr;
ll f(ll x){
    ll cnt=1, chk=arr[0];
    for (int i=1;i<N;i++){
        if (arr[i]-chk>=x){
            cnt++;
            chk=arr[i];
        }
    }
    return cnt>=M;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M;
    for (int i=0;i<N;i++){
        ll a;
        cin >> a;
        arr.push_back(a);
    }
    sort(arr.begin(),arr.end());
    ll lo=1, hi=1000000001;
    while (lo+1<hi){
        ll mid=(lo+hi)/2;
        if (f(mid))
            lo=mid;
        else
            hi=mid;
    }
    cout << lo;
    return 0;
}