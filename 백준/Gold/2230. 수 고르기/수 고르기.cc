#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, M;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M;
    vector<ll> v;
    for (ll i=0;i<N;i++){
        ll a;
        cin >> a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    ll ans=1987654321, i=0, j=0;
    for (;i<N && j<N;){
        if (v[i]-v[j]<M)
            i++;
        else{
            ans=min(ans, v[i]-v[j]);
            j++;
        }
    }
    cout << ans;
    return 0;
}