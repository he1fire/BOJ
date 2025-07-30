#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, M, dp[35][40005];
int main(){
    ios::sync_with_stdio(0);
    cin.tie();
    cin >> N;
    for (int i=0;i<N;i++){
        ll a;
        cin >> a;
        for (int j=1;j<=15000;j++){
            if (i>0 && dp[i-1][j]==1)
                dp[i][j]=dp[i][j+a]=dp[i][abs(j-a)]=1;
        }
        dp[i][a]=1;
    }
    cin >> M;
    for (int i=0;i<M;i++){
        ll a;
        cin >> a;
        cout << (dp[N-1][a] ? "Y" : "N") << " "; 
    }
    return 0;
}