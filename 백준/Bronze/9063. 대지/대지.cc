#include <bits/stdc++.h>
#define ll long long
using namespace std;
typedef pair<ll,ll> pll;
ll N;
pll mn={10005,10005}, mx={-10005,-10005};
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for (int i=0;i<N;i++){
        ll a, b;
        cin >> a >> b;
        mn.first=min(mn.first, a);
        mn.second=min(mn.second, b);
        mx.first=max(mx.first, a);
        mx.second=max(mx.second, b);
    }
    cout << abs((mx.first-mn.first)*(mx.second-mn.second));
    return 0;
}