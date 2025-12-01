#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, M, dp[100005];
ll f(vector<ll> &v){
    ll ret=0;
    for (ll i=0;i<v.size();i++){
        if (i<2)
            dp[i]=v[i];
        else{
            if (i==2)
                dp[i]=v[i]+dp[i-2];
            else
                dp[i]=v[i]+max(dp[i-2],dp[i-3]);
        }
        ret=max(ret,dp[i]);
    }
    return ret;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    while (1){
        cin >> N >> M;
        if (!N && !M)
            break;
        vector<ll> y;
        for (ll i=0;i<N;i++){
            vector<ll> x;
            for (ll j=0,a;j<M;j++){
                cin >> a;
                x.push_back(a);
            }
            y.push_back(f(x));
        }
        cout << f(y) << "\n";
    }
    return 0;
}