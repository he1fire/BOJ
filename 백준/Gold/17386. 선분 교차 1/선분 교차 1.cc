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
ll intersect(pll a, pll b, pll c, pll d){
    ll ab=(ccw(a,b,c)*ccw(a,b,d)), cd=(ccw(c,d,a)*ccw(c,d,b));
    if (ab==0 && cd==0){
        if (a>b)
            swap(a,b);
        if (c>d)
            swap(c,d);
        return (c<=b && a<=d);
    }
    else
        return (ab<=0 && cd<=0);
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> a.first >> a.second >> b.first >> b.second >> c.first >> c.second >> d.first >> d.second;
    cout << intersect(a,b,c,d);
    return 0;
}