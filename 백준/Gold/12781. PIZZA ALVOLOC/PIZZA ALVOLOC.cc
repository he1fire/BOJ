#include <bits/stdc++.h>
#define ll long long
using namespace std;
typedef pair<ll,ll> pll;
pll a, b, c, d;
ll ccw(pll a, pll b, pll c){
    ll ret=(a.first*b.second+b.first*c.second+c.first*a.second)-(a.second*b.first+b.second*c.first+c.second*a.first);
    if (ret>0) return 1;
    else if (ret<0) return -1;
    else return 0;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> a.first >> a.second >> b.first >> b.second >> c.first >> c.second >> d.first >> d.second;
    cout << ((ccw(a,b,c)*ccw(a,b,d))<0 && (ccw(c,d,a)*ccw(c,d,b))<0);
    return 0;
}