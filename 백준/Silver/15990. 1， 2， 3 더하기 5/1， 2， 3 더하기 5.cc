#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000009;
using namespace std;
ll N, dp[4][100005];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    dp[1][1]=dp[2][2]=dp[3][3]=dp[1][3]=dp[2][3]=1;
    for (int i=4;i<=100000;i++){
        dp[1][i]=(dp[2][i-1]+dp[3][i-1])%MOD;
        dp[2][i]=(dp[1][i-2]+dp[3][i-2])%MOD;
        dp[3][i]=(dp[1][i-3]+dp[2][i-3])%MOD;
    }
    for (int i=0;i<N;i++){
        ll a;
        cin >> a;
        cout << (dp[1][a]+dp[2][a]+dp[3][a])%MOD;
        cout << "\n";
    }
    return 0;
}