#include <bits/stdc++.h>
#define ll long long
using namespace std;
map<ll,ll> m[15];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    for (ll i=0;i<2047;i++){
        for (ll j=0;j<11;j++){
            ll a;
            cin >> a;
            m[j][a]++;
        }
    }
    for (ll i=0;i<11;i++){
        for (auto x:m[i]){
            if (x.second==1023)
                cout << x.first << " ";
        }
    }
    return 0;
}