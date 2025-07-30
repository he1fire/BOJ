#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll a, b, c, d;
ll f(ll a, ll b){
    return a ? f(b%a,a) : b;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> a >> b >> c >> d;
    ll x=a*d+b*c, y=b*d, z=f(x,y);
    cout << x/z << " " << y/z;    
    return 0;
}