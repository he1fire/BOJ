#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, ans=1e9+7;
vector<ll> arr;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for (int i=0;i<2*N;i++){
        ll a;
        cin >> a;
        arr.push_back(a);
    }
    sort(arr.begin(),arr.end());
    for (int i=0;i<N;i++)
        ans=min(ans,arr[i]+arr[2*N-i-1]);
    cout << ans;
    return 0;
}