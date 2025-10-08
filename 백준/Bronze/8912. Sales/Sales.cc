#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, M;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    while (N--){
        ll ans=0;
        vector<ll> v;
        cin >> M;
        for (ll i=0,a;i<M;i++){
            cin >> a;
            for (auto x:v){
                if (x<=a)
                    ans++;
            }
            v.push_back(a);
        }
        cout << ans << "\n";
    }
    return 0;
}