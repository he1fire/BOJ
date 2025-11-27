#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, M, K, arr[1005][1005], dp[1005][1005];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M;
    for (ll i=0;i<N;i++){
        for (ll j=0;j<M;j++)
            cin >> arr[i][j];
    }
    cin >> K;
    for (ll i=0;i<N;i++){
        for (ll j=0;j<M;j++){
            dp[i][j]+=arr[i][j];
            if (i>0 && j>0)
                dp[i][j]+=min(dp[i-1][j],dp[i][j-1]);
            else if (i>0)
                dp[i][j]+=dp[i-1][j];
            else if (j>0)
                dp[i][j]+=dp[i][j-1];
        }
    }
    if (dp[N-1][M-1]<=K)
        cout << "YES\n" << dp[N-1][M-1];
    else
        cout << "NO";
    return 0;
}