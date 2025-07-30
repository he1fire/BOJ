#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, arr[105];
ll f(ll a,ll b){
    return a ? f(b%a,a): b;
}
int main () {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for (ll i=0;i<N;i++){
        ll M, ans=0;
        cin >> M;
        for (ll j=0;j<M;j++)
            cin >> arr[j];
        for (ll j=0;j<M;j++){
            for (ll k=j+1;k<M;k++)
                ans+=f(arr[j],arr[k]);
        }
        cout << ans << "\n";
    }
    return 0;
}