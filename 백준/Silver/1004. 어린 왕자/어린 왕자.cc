#include <bits/stdc++.h>
#define ll long long
using namespace std;
typedef pair<ll,ll> pll;
ll f(pll a, pll b, ll c){
    return pow(a.first-b.first,2)+pow(a.second-b.second,2)<c*c;
}
int main(){
    ll T;
    cin >> T;
    while (T--){
        pll x, y;
        ll N, ans=0;
        cin >> x.first >> x.second >> y.first >> y.second >> N;
        for (int i=0;i<N;i++){
            pll a;
            ll b;
            cin >> a.first >> a.second >> b;
            if (f(a,x,b) && f(a,y,b));
            else if (f(a,x,b) || f(a,y,b))
                ans++;
        }
        cout << ans << "\n";
    }
    return 0;
}