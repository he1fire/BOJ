#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N;
vector<ll> v;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    while (N--){
        ll ans=0, chk=0;
        v.clear();
        while (1){
            ll a;
            cin >> a;
            if (!a)
                break;
            v.push_back(a);
        }
        sort(v.rbegin(),v.rend());
        for (ll i=0;i<v.size();i++){
            ll x=v[i]*2;
            for (ll j=0;j<i;j++){
                x*=v[i];
                if (x+ans>5000000)
                    break;
            }
            ans+=x;
            if (ans>5000000){
                chk=1;
                break;
            }
        }
        if (chk)
            cout << "Too expensive\n";
        else
            cout << ans << "\n";
    }
    return 0;
}