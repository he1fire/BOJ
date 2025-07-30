#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, M, K, arr[305][305], DP[305][305], ans=0;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M >> K;
    fill(&arr[0][0],&arr[304][305],-1);
    fill(&DP[0][0],&DP[304][305],-1);
    for (int i=0;i<K;i++){
        ll a, b, c;
        cin >> a >> b >> c;
        if (arr[a][b]<c)
            arr[a][b]=c;
    }
    DP[1][0]=0;
    for (int i=1;i<N;i++){
        for (int j=i+1;j<=N;j++){
            if (arr[i][j]!=-1){
                for (int k=1;k<M;k++){
                    if (DP[i][k-1]!=-1)
                        DP[j][k]=max(DP[j][k],DP[i][k-1]+arr[i][j]);
                }
            }
        }
    }
    for (int i=1;i<M;i++)
        ans=max(ans,DP[N][i]);
    cout << ans;
    return 0;
}