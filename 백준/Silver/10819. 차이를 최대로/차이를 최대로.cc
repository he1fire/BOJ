#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, ans;
vector<ll> arr;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for (int i=0;i<N;i++){
        ll a;
        cin >> a;
        arr.push_back(a);
    }
    sort(arr.begin(),arr.end());
    do {
        ll cnt=0;
        for (int i=0;i<N-1;i++)
            cnt+=abs(arr[i]-arr[i+1]);
        ans=max(cnt,ans);
    } while (next_permutation(arr.begin(),arr.end()));
    cout << ans;
    return 0;
}