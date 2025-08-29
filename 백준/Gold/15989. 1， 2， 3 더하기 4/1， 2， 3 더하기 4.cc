#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, dp[10005][5];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for (int i=1;i<=3;i++)
        dp[i][i]=1;
    for (int i=1;i<=10000;i++){
        for (int j=1;j<=min(i,3);j++){
            for (int k=1;k<=j;k++)
                dp[i][j]+=dp[i-j][k];
        }
    }
    while (N--){
        ll a;
        cin >> a;
        cout << dp[a][1]+dp[a][2]+dp[a][3] << "\n";
    }
    return 0;
}