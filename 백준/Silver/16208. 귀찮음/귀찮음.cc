#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long
using namespace std;
int main() {
    vector<ll> x;
    ll N, cnt=0, ans=0;
    cin >> N;
    while (N--){
        ll a;
        cin >> a;
        x.push_back(a);
        cnt+=a;
    }
    sort(x.begin(),x.end());
    for (ll i=0;i<x.size();i++){
        cnt-=x[i];
        ans+=cnt*x[i];
    }
    cout << ans;
    return 0;
}