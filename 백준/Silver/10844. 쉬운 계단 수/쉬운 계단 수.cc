#include <iostream>
#define ll long long
using namespace std;
int main () {
    ll N, ans=0, dp[105][11]={0};
    cin >> N;
    for (int i=1;i<10;i++)
        dp[1][i]=1;
    for (int i=2;i<=N;i++){
        for (int j=0;j<10;j++){
            if (j!=0 && j!=9)
                dp[i][j]=(dp[i-1][j+1]+dp[i-1][j-1])%1000000000;
            else if (j==0)
                dp[i][j]=dp[i-1][j+1];
            else if (j==9)
                dp[i][j]=dp[i-1][j-1];
        }
    }
    for (int i=0;i<10;i++){
        ans+=dp[N][i];
        ans%=1000000000;
    }
    cout << ans;
    return 0;
}