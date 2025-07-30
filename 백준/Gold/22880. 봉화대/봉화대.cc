#include <bits/stdc++.h>
#define ll long long
#define MOD (ll)(1e9+7)
using namespace std;
ll N, ans=1, idx, mx;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for (int i=0;i<N;i++){
        ll a;
        cin >> a;
        if (a>mx){
            mx=a;
            ans=(ans*(i-idx+1))%MOD;
            idx=i;
        }
    }
    cout << ans;
    return 0;
}