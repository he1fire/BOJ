#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, ans, mx;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for (ll i=1;i<=4;i++){
        ll x=16;
        for (ll j=0;j<i;j++,x/=2);
        ll tmp=min(N+x,200+i*10);
        if (tmp>=mx){
            ans=i;
            mx=tmp;
        }
    }
    cout << ans;
    return 0;
}