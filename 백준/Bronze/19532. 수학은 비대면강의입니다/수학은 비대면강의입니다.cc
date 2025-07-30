#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, M;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll a, b, c, d, e, f;
    cin >> a >> b >> c >> d >> e >> f;
    for (ll i=-999;i<=999;i++){
        for (ll j=-999;j<=999;j++){
            if (a*i+b*j==c && d*i+e*j==f){
                cout << i << " " << j;
            }
        }
    }
    return 0;
}