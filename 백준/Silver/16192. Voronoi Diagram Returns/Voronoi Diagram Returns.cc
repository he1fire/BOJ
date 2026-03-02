#include <bits/stdc++.h>
#define ll long long
#define INF 1e18+7
using namespace std;
struct xy{
    ll x, y;
};
ll N, M;
vector<xy> arr;
void f(xy a){
    ll cnt=INF;
    vector<ll> v;
    for (ll i=0;i<N;i++){
        ll tmp=(a.x-arr[i].x)*(a.x-arr[i].x)+(a.y-arr[i].y)*(a.y-arr[i].y);
        if (cnt>tmp){
            cnt=tmp;
            v.clear();
            v.push_back(i+1);
        }
        else if (cnt==tmp)
            v.push_back(i+1);
    }
    if (v.size()==1)
        cout << "REGION " << v[0] << "\n";
    else if (v.size()==2)
        cout << "LINE " << v[0] << " " << v[1] << "\n";
    else
        cout << "POINT\n";
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M;
    for (ll i=0;i<N;i++){
        ll a, b;
        cin >> a >> b;
        arr.push_back({a,b});
    }
    for (ll i=0;i<M;i++){
        ll a, b;
        cin >> a >> b;
        f({a,b});
    }
    return 0;
}