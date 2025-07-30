#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, M, dp[5005][5005], ans;
string S1, S2;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M >> S1 >> S2;
    for (int i=0;i<M;i++){
        for (int j=0;j<N;j++){
            if (i==0){
                dp[i][j]=(S1[j]==S2[i]);
            }
            else{
                if (j==0)
                    dp[i][j]=dp[i-1][j+1]+(S1[j]==S2[i]);
                else if (j==N-1)
                    dp[i][j]=dp[i-1][j-1]+(S1[j]==S2[i]);
                else
                    dp[i][j]=max(dp[i-1][j-1],dp[i-1][j+1])+(S1[j]==S2[i]);
            }
        }
    }
    for (int i=0;i<N;i++)
        ans=max(ans,dp[M-1][i]);
    cout << ans;
    return 0;
}