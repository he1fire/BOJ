#include <bits/stdc++.h>
#define ll long long
using namespace std;
typedef pair<ll,ll> pll;
ll N, DP[105], ans;
vector<pll> arr;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for (int i=0;i<N;i++){
        ll a, b;
        cin >> a >> b;
        if (a>b)
            swap(a,b);
        arr.push_back({a,b});
    }
    sort(arr.begin(),arr.end());
    for (int i=0;i<N;i++){
        ll mx=0;
        for (int j=0;j<i;j++){
            if (arr[j].second<=arr[i].second)
                mx=max(mx,DP[j]);
        }
        DP[i]=mx+1;
        ans=max(ans,DP[i]);
    }
    cout << ans;
    return 0;
}