#include <bits/stdc++.h>
#define ll long long
#define INF 1e9+7
using namespace std;
struct st{
    ll a, b;
};
ll N, M, ans=INF, dp[1105];
vector<st> v;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M;
    while (M--){
        ll a, b;
        cin >> a >> b;
        v.push_back({a,b});
    }
    fill(&dp[0],&dp[1104],INF);
    dp[0]=0;
    for (int i=1;i<=1100;i++){
        for (auto x:v){
            if (x.b<=i)
                dp[i]=min(dp[i],dp[i-x.b]+x.a);
        }
    }
    for (int i=N;i<=1100;i++)
        ans=min(ans,dp[i]);
    cout << ans;
    return 0;
}