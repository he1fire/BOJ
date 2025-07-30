#include <bits/stdc++.h>
#define ll long long
#define INF 1e9+7
using namespace std;
ll N, S, T;
ll arr[205], DP[205][205];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    while(1){
        cin >> N;
        if (!N)
            break;
        cin >> S >> T;
        fill(&DP[0][0],&DP[204][205],-INF);
        for (int i=0;i<N;i++)
            cin >> arr[i];
        for (int i=0;i<S;i++)
            DP[i][1]=arr[i];
        for (int i=2;i<T;i++){
            for (int j=0;j<N;j++){
                ll mx=-INF;
                for (int k=1;k<=S;k++){
                    if (j-k<0)
                        break;
                    mx=max(mx,DP[j-k][i-1]);
                }
                DP[j][i]=mx+arr[j];
            }
        }
        ll ans=-INF;
        for (int i=1;i<=S;i++)
            ans=max(ans,DP[N-i][T-1]);
        cout << ans << "\n";
    }
    return 0;
}