#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, arr[1000005];
vector<ll> v;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    arr[0]=arr[1]=1;
    for (ll i=2;i<=1000000;i++){
        if (!arr[i]){
            for (ll j=i*i;j<=1000000;j+=i)
                arr[j]=1;
            v.push_back(i);
        }
    }
    cin >> N;
    while (N--){
        ll a, ans=0;
        for (ll i=0;i<5;i++){
            cin >> a;
            ans+=*lower_bound(v.begin(),v.end(),a);
        }
        cout << ans << "\n";
    }
    return 0;
}