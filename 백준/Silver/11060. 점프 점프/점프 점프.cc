#include <bits/stdc++.h>
#define ll long long
#define INF 987654321
using namespace std;
ll N, dp[2005], arr[2005];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    fill(&dp[0],&dp[2004],INF);
    cin >> N;
    for (int i=0;i<N;i++)
        cin >> arr[i];
    dp[0]=0;
    for (int i=0;i<N;i++){
        ll x=arr[i];
        for (int j=i+1;j<=i+x;j++)
            dp[j]=min(dp[j],dp[i]+1);
    }
    if (dp[N-1]==INF)
        cout << -1;
    else
        cout << dp[N-1];
    return 0;
}