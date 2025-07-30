#include <bits/stdc++.h>
#define ll long long
using namespace std;
vector<ll> v;
ll f(ll a, ll b){
    return a ? f(b%a,a) : b;
}
ll g(ll a, ll b){
    return a/f(a,b)*b;
}
int main(){
    ll a, b, L, lcm=0;
    cin >> a >> b >> L;
    lcm=g(a,b);
    if (L%lcm!=0)
        cout << "-1";
    else {
        ll cnt=L/lcm, ans=L/lcm;
        for (ll i=2;i*i<=cnt;i++){
            if (cnt%i==0){
                v.push_back(i);
                while (cnt%i==0)
                    cnt/=i;
            }
        }
        if (cnt!=1)
            v.push_back(cnt);
        for (ll i=0;i<v.size();i++){
            while (lcm%v[i]==0){
                ans*=v[i];
                lcm/=v[i];
            }
        }
        cout << ans;
    }
    return 0;
}
