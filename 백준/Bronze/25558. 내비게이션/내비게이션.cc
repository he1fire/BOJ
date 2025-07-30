#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, M, ans=1e18+7, OEM;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    for (int i=1;i<=N;i++){
        ll x=a, y=b, chk=0;
        cin >> M;
        while (M--){
            ll dx, dy;
            cin >> dx >> dy;
            chk+=abs(x-dx)+abs(y-dy);
            x=dx, y=dy;
        }
        chk+=abs(x-c)+abs(y-d);
        if (chk<ans){
            ans=chk;
            OEM=i;
        }
    }
    cout << OEM;
    return 0;
}