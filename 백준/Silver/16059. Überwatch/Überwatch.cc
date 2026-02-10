#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, M, dp[15][300005], ans;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M;
    for (ll i=0,x;i<N;i++){
        cin >> x;
        if (i<M)
            continue;
        dp[M][i]=dp[1][i-1]+x;
        for (ll j=M-1;j>0;j--)
            dp[j][i]=max(dp[j+1][i-1],dp[j][i-1]);
    }
    for (ll i=0;i<=M;i++)
        ans=max(ans,dp[i][N-1]);
    cout << ans;
    return 0;
}