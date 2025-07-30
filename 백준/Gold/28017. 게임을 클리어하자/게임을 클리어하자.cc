#include <bits/stdc++.h>
#define ll long long
#define INF (ll)(1e9+7)
using namespace std;
ll N, M, arr[505][505], dp[505][505], ans=INF;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M;
    for (int i=0;i<N;i++){
        for (int j=0;j<M;j++)
            cin >> arr[i][j];
    }
    for (int i=0;i<N;i++){
        for (int j=0;j<M;j++){
            if (i==0)
                dp[i][j]=arr[i][j];
            else{
                ll mn=INF;
                for (int k=0;k<M;k++){
                    if (k!=j)
                        mn=min(mn,dp[i-1][k]);
                }
                dp[i][j]=arr[i][j]+mn;
            }
        }
    }
    for (int i=0;i<M;i++)
        ans=min(ans,dp[N-1][i]);
    cout << ans;
    return 0;
}