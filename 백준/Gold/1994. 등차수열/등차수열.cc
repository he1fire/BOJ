#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, arr[2005][2005], dp[2005][2005], ans=0;
vector<ll> v;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for (int i=0;i<N;i++){
        ll a;
        cin >> a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    for (int i=0;i<N;i++){
        for (int j=0;j<N;j++){
            arr[i][j]=v[j]-v[i];
        }
    }
    for (int i=0;i<N;i++){
        for (int j=i+1;j<N;j++){
            ll x=arr[i][j];
            if (binary_search(arr[i],arr[i]+i,-x))
                dp[i][j]=dp[upper_bound(arr[i],arr[i]+i,-x)-1-arr[i]][i]+1;
            else
                dp[i][j]=1;
            ans=max(ans,dp[i][j]);
        }
    }
    cout << ans+1;

    return 0;
}