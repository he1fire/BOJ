#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, ans, arr[1005], dp[2][1005];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for (int i=0;i<N;i++)
        cin >> arr[i];
    for (int i=0;i<N;i++){
        ll mx=0;
        for (int j=0;j<i;j++){
            if (arr[j]<arr[i])
                mx=max(mx,dp[0][j]);
        }
        dp[0][i]=mx+1;
    }
    for (int i=N-1;i>=0;i--){
        ll mx=0;
        for (int j=N-1;j>i;j--){
            if (arr[j]<arr[i])
                mx=max(mx,dp[1][j]);
        }
        dp[1][i]=mx+1;
    }
    for (int i=0;i<N;i++)
        ans=max(ans,dp[0][i]+dp[1][i]-1);
    cout << ans;
    return 0;
}