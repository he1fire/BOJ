#include <bits/stdc++.h>
#define ll long long
#define INF 1000000007
using namespace std;
ll N, M, dp[10005];
vector<ll> arr;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M;
    for (int i=0;i<N;i++){
        ll a;
        cin >> a;
        arr.push_back(a);
    }
    dp[0]=1;
    sort(arr.begin(),arr.end());
    for (int i=0;i<N;i++){
        ll x=arr[i];
        for (int j=x;j<=M;j++)
            dp[j]+=dp[j-x];
    }
    cout << dp[M];
    return 0;
}