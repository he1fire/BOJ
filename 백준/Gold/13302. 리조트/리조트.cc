#include <bits/stdc++.h>
#define ll long long
#define INF (1e9+7)
using namespace std;
ll N, M, ans=INF;
ll DP[105][50], arr[105];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M;
    for (int i=0, a;i<M;i++){
        cin >> a;
        arr[a]=1;
    }
    fill(&DP[0][0], &DP[104][50], INF);
    DP[0][0]=0;
    for (int i=1;i<=N;i++){
        for (int j=0;j<=40;j++){
            if (arr[i])
                DP[i][j]=min(DP[i][j],DP[i-1][j]);
            if (DP[i-1][j+3]<INF)
                DP[i][j]=min(DP[i][j],DP[i-1][j+3]);
            if (i>=5 && j>=2)
                DP[i][j]=min(DP[i][j],DP[i-5][j-2]+37000);
            if (i>=3 && j>=1)
                DP[i][j]=min(DP[i][j],DP[i-3][j-1]+25000);
            if (i>=1)
                DP[i][j]=min(DP[i][j],DP[i-1][j]+10000);
        }
    }
    for (int j=0;j<=40;j++)
        ans=min(ans,DP[N][j]);
    cout << ans;
    return 0;
}