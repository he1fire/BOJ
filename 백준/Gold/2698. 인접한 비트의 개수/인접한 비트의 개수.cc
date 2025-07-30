#include <iostream>
#include <algorithm>
using namespace std;
int n, k, dp[105][105][2];
int f(int n, int k, int x){
    if (dp[n][k][x]==-1)
        x==0 ? dp[n][k][0]=f(n-1,k,0)+f(n-1,k,1) : dp[n][k][1]=f(n-1,k,0)+f(n-1,k-1,1);
    return n>k ? dp[n][k][x] : 0;  
}
int main () {
    for (int i=0;i<=100;i++){
        for (int j=0;j<=100;j++){
            for (int k=0;k<=1;k++){
                dp[i][j][k]=-1;
            }
        }
    }
    dp[1][1][0]=0;
    dp[1][0][0]=1;
    dp[1][1][1]=0;
    dp[1][0][1]=1;
    int T;
    cin >> T;
    for (int i=0;i<T;i++){
        cin >> n >> k;
        cout << f(n,k,0)+f(n,k,1) << "\n";
    }
    return 0;
}