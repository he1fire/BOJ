#include <bits/stdc++.h>
#define ll long long
#define INF 1e10+7
using namespace std;
ll N, arr[1005], dp[300005];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for (int i=1;i<=1000;i++)
        arr[i]=arr[i-1]+(i*(i+1)/2);
    for (int i=1;i<=N;i++){
        ll mn=INF;
        for (int j=1;arr[j]<=i;j++)
            mn=min(dp[i-arr[j]]+1,mn);
        dp[i]=mn;
    }
    cout << dp[N];
}