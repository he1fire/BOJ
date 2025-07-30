#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll a, b;
ll f(ll x){
    ll y=0;
    while (x){
        y*=10;
        y+=x%10;
        x/=10;
    }
    return y;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> a >> b;
    cout << f(f(a)+f(b));
    return 0;
}