#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, ans;
vector<ll> v[2];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for (ll i=0;i<2;i++){
        for (ll j=0;j<N;j++){
            v[i].emplace_back();
            cin >> v[i].back();
        }
    }
    for (ll i=0;i<N;i++){
        if (v[0][i]>v[1][i])
            ans+=v[0][i]-v[1][i];
    }
    cout << ans;
    return 0;
}