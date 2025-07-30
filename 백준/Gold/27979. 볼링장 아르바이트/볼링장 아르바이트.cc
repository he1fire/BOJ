#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, mx, ans;
vector<ll> v;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    while (N--){
        ll a;
        cin >> a;
        if (!v.empty() && v[v.size()-1]>a){
            ans++;
            mx=max(mx,a);
        }
        else
            v.push_back(a);
    }
    cout << ans+(lower_bound(v.begin(), v.end(), mx)-v.begin());
    return 0;
}