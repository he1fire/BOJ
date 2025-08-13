#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, M, arr[2][200005], dp[2][200005];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M;
    for (int i=0;i<2;i++){
        for (int j=0;j<N;j++)
            cin >> arr[i][j];
    }
    dp[0][0]=arr[0][0];
    dp[1][0]=arr[1][0];
    for (int i=1;i<N;i++){
        dp[0][i]=min(dp[0][i-1],dp[1][i-1]+M)+arr[0][i];
        dp[1][i]=min(dp[1][i-1],dp[0][i-1]+M)+arr[1][i];
    }
    cout << min(dp[0][N-1],dp[1][N-1]);
    return 0;
}