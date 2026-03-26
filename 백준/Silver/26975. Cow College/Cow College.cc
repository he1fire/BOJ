#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, ans, x;
vector<ll> v;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for (ll i=0;i<N;i++){
        v.emplace_back();
        cin >> v.back();
    }
    sort(v.begin(),v.end());
    for (ll i=0;i<N;i++){
        if ((N-i)*v[i]>ans){
            ans=(N-i)*v[i];
            x=v[i];
        }
    }
    cout << ans << " " << x;
    return 0;
}