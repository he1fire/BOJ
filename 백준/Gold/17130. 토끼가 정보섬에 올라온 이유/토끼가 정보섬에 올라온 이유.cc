#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, M, dp[1005][1005], ans=-1;
string S[1005];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M;
    for (int i=0;i<N;i++)
        cin >> S[i];
    fill(&dp[0][0],&dp[1004][1005],-1);
    for (int i=0;i<M;i++){
        for (int j=0;j<N;j++){
            if (S[j][i]=='R')
                dp[j][i]=0;
            else if (S[j][i]!='#'){
                ll tmp=-1;
                for (int k=-1;k<=1;k++){
                    if (!i || j+k<0 || j+k>=N)
                        continue;
                    tmp=max(tmp,dp[j+k][i-1]);
                }
                if (tmp==-1)
                    continue;
                dp[j][i]=tmp+(S[j][i]=='C');
                if (S[j][i]=='O')
                    ans=max(ans,dp[j][i]);
            }
        }
    }
    cout << ans;
    return 0;
}