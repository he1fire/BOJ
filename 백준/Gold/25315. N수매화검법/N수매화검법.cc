#include <bits/stdc++.h>
#define ll long long
using namespace std;
typedef pair<ll,ll> pll;
struct ABC{
    pll a, b;
    ll x;
    ABC() {}
    ABC(pll a, pll b, ll x): a(a), b(b), x(x) {}
};
bool operator<(ABC x, ABC y){
    return x.x>y.x;
}
ll N, ans;
vector<ABC> v;
ll ccw(pll a, pll b, pll c){
    ll ret=(a.first*b.second+b.first*c.second+c.first*a.second)-(a.second*b.first+b.second*c.first+c.second*a.first);
    if (ret>0) return 1;
    else if (ret<0) return -1;
    else return 0;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for (int i=0;i<N;i++){
        ll a, b, c, d, e;
        cin >> a >> b >> c >> d >> e;
        v.push_back({{a,b},{c,d},e});
    }
    sort(v.begin(),v.end());
    for (int i=0;i<N;i++){
        ll cnt=1;
        for (int j=0;j<i;j++){
            if ((ccw(v[i].a,v[i].b,v[j].a)*ccw(v[i].a,v[i].b,v[j].b))<0 && (ccw(v[j].a,v[j].b,v[i].a)*ccw(v[j].a,v[j].b,v[i].b))<0)
                cnt++;
        }
        ans+=cnt*v[i].x;
    }
    cout << ans;
    return 0;
} 