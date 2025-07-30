#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;
ll N, M, dp[15][100005], cnt[15], ans;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M;
    for (int i=1;i<=M;i++)
        dp[1][i]=1;
    cnt[1]=M;
    for (int i=2;i<=N;i++){
        for (int j=1;j<=M;j++){
            ll tmp=0;
            for (int k=j*2;k<=M;k+=j)
                tmp=(tmp+dp[i-1][k])%MOD;
            dp[i][j]=(cnt[i-1]+MOD-tmp)%MOD;
            cnt[i]=(cnt[i]+dp[i][j])%MOD;
        }
    }
    cout << cnt[N];
    return 0;
}