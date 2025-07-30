#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll w, h, x, y, t;
ll f (ll a, ll b){
    for (int i=0, dir=1;i<t%(2*b);i++){
        if (a==0)
            dir=1;
        else if (a==b)
            dir=-1;
        a+=dir;
    }
    return a;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> w >> h >> x >> y >> t;
    cout << f(x,w) << " " << f(y,h);
    return 0;
}