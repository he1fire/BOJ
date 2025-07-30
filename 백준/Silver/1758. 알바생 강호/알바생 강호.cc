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
    sort(arr.begin(),arr.end(),greater<ll>());
    for (int i=0;i<N;i++){
        ll x=arr[i]-i;
        if (x>0)
            ans+=x;
    }
    cout << ans;
    return 0;
}