#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, arr[20][20], dp[3][20][20];//0 가로 1 세로 2 대각
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for (int i=0;i<N;i++){
        for (int j=0;j<N;j++){
            cin >> arr[i][j];
        }
    }
    dp[0][0][1]=1;
    for (int i=0;i<N;i++){
        for (int j=0;j<N;j++){
            if (arr[i][j])
                continue;
            if (j-1<0)
                continue;
            dp[0][i][j]+=dp[0][i][j-1]+dp[2][i][j-1];
            if (i-1<0)
                continue;
            dp[1][i][j]+=dp[1][i-1][j]+dp[2][i-1][j];
            if (arr[i-1][j] || arr[i][j-1])
                continue;
            dp[2][i][j]+=dp[0][i-1][j-1]+dp[1][i-1][j-1]+dp[2][i-1][j-1];
        }
    }
    cout << dp[0][N-1][N-1]+dp[1][N-1][N-1]+dp[2][N-1][N-1];
    return 0;
}