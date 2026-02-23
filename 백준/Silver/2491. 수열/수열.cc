#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, arr[100005], dp[100005][2], ans=1;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for (ll i=0;i<N;i++)
        cin >> arr[i];
    dp[0][0]=dp[0][1]=1;
    for (ll i=1;i<N;i++){
        if (arr[i-1]<=arr[i])
            dp[i][0]=dp[i-1][0]+1;
        else
            dp[i][0]=1;
        if (arr[i-1]>=arr[i])
            dp[i][1]=dp[i-1][1]+1;
        else
            dp[i][1]=1;
        ans=max({ans,dp[i][0],dp[i][1]});
    }
    cout << ans;
    return 0;
}