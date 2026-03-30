#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, x[100005], y[100005];
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for (ll i=0;i<N;i++){
        ll a;
        cin >> a;
        x[i%3]+=a;
    }
    for (ll i=0;i<N;i++){
        ll a;
        cin >> a;
        y[i%3]+=a;
    }
    cout << x[0]*y[1]+x[1]*y[0]+x[2]*y[2] << " " << x[0]*y[2]+x[1]*y[1]+x[2]*y[0] << " " << x[0]*y[0]+x[1]*y[2]+x[2]*y[1];
    return 0;
}