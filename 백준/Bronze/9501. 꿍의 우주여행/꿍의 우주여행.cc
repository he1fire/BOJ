#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll T;
    cin >> T;
    while (T--){
        ll N, M, ans=0;
        cin >> N >> M;
        while (N--){
            ll a, b, c;
            cin >> a >> b >> c;
            if (M*c<=a*b)
                ans++;
        }
        cout << ans << "\n";
    }
    return 0;
}