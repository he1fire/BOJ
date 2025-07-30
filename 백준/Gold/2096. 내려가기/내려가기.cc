#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, dp[2][3];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for (int i=0;i<N;i++){
        ll a, b, c, arr[2][3];
        cin >> a >> b >> c;
        if (i==0){
            arr[0][0]=arr[1][0]=a;
            arr[0][1]=arr[1][1]=b;
            arr[0][2]=arr[1][2]=c;
        }
        else {
            arr[0][0]=max(dp[0][0],dp[0][1])+a;
            arr[0][1]=max({dp[0][0],dp[0][1],dp[0][2]})+b;
            arr[0][2]=max(dp[0][1],dp[0][2])+c;
            arr[1][0]=min(dp[1][0],dp[1][1])+a;
            arr[1][1]=min({dp[1][0],dp[1][1],dp[1][2]})+b;
            arr[1][2]=min(dp[1][1],dp[1][2])+c;
        }
        for (int j=0;j<6;j++)
            dp[j/3][j%3]=arr[j/3][j%3];
    }
    cout << max({dp[0][0],dp[0][1],dp[0][2]}) << " " << min({dp[1][0],dp[1][1],dp[1][2]});
}