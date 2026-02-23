#include <bits/stdc++.h>
#define ll long long
using namespace std;
struct xy{
    ll x, y;
};
ll N;
xy f(ll a){
    xy ret;
    for (ll i=1;a>0;i++){
        a-=i;
        ret.x=i;
    }
    ret.y=ret.x+1-(ret.x+a);
    ret.x+=a;
    return ret;
}
ll g(xy a, xy b){
    xy tmp={a.x+b.x,a.y+b.y};
    ll ret=0;
    for (ll i=1;i<tmp.x+tmp.y;i++)
        ret+=i;
    ret-=tmp.y-1;
    return ret;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    while (N--){
        ll a, b;
        cin >> a >> b;
        cout << g(f(a),f(b)) << "\n";
    }
    return 0;
}