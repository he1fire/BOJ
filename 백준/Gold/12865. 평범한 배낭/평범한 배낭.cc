#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, M, dp[100005];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M;
    for (int i=1;i<=N;i++){
        ll a, b;
        cin >> a >> b;
        for (int j=M;j>=1;j--){
            if (j>=a)
                dp[j]=max(dp[j],dp[j-a]+b);
        }
    }
    cout << dp[M];
    return 0;
}