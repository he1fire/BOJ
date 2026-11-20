#include <bits/stdc++.h>
#define ll long long
using namespace std;
struct xy{
    ll x=1e6+1, y=-1e6-1;
};
ll N;
xy L, W;
int main(){
    ios::sync_with_stdio(0);
    cin >> N;
    for (ll i=0;i<N;i++){
        ll a, b;
        cin >> a >> b;
        L.x=min(L.x,a);
        L.y=max(L.y,a);
        W.x=min(W.x,b);
        W.y=max(W.y,b);
    }
    cout << (L.y-L.x+1)/2 << " " << (W.y-W.x+1)/2;
    return 0;
}