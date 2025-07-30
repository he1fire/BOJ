#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, M, dp[2005][2005], ans;
string arr[2005];
int main(){
    cin >> N >> M;
    for (int i=0;i<N;i++)
        cin >> arr[i];
    for (int i=0;i<M-1;i++){
        for (int j=0;j<N;j++){
            if (i==0)
                dp[j][i]=arr[j][i]-'0';
            else if (j==0)
                dp[j][i]=max(dp[j][i-1],dp[j+1][i-1])+arr[j][i]-'0';
            else
                dp[j][i]=max({dp[j-1][i-1],dp[j][i-1],dp[j+1][i-1]})+arr[j][i]-'0';
            ans=max(ans,dp[j][i]);
        }
    }
    cout << ans;
    return 0;
}