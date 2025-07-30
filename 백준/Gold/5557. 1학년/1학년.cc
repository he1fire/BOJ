#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, dp[105][25], arr[105], ans;
int main(){
    cin >> N;
    for (ll i=1;i<=N;i++)
        cin >> arr[i];
    dp[1][arr[1]]=1;
    for (ll i=2;i<N;i++){
        for (ll j=0;j<=20;j++){
            if (dp[i-1][j]){
                if (j+arr[i]<=20)
                    dp[i][j+arr[i]]+=dp[i-1][j];
                if (j-arr[i]>=0)
                    dp[i][j-arr[i]]+=dp[i-1][j];
            }
        }
    }
    cout << dp[N-1][arr[N]];
    return 0;
}