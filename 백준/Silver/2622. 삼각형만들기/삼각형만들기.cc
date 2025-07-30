#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll N, ans=0;
    cin >> N;
    for (ll i=1;i<=N/3;i++){
        ll a=i;
        for (ll j=i;j<=(N-a)/2;j++){
            ll b=j, c=N-a-b;
            if (a+b>c && a+c>b && b+c>a)
                ans++;
        }
    }
    cout << ans;
    return 0;
}