#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll T, N, M;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> T;
    for (ll i=1;i<=T;i++){
        vector<ll> v;
        cin >> N >> M;
        while (N--){
            v.emplace_back();
            cin >> v.back();
        }
        ll L=0, R=v.size()-1, ans=0;
        while (L<R){
            if (v[L]+v[R]==M){
                ans++;
                L++;
                R--;
            }
            else if (v[L]+v[R]>M)
                R--;
            else
                L++;
        }
        cout << "Case #" << i << ": " << ans << "\n";
    }
    return 0;
}