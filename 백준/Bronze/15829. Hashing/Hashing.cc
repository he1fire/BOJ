#include <bits/stdc++.h>
#define ll long long
#define MOD 1234567891
using namespace std;
ll N;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s;
    ll ans=0, arr[51];
    cin >> N >> s;
    for (ll i=0;i<51;i++){
        ll a=1;
        for (ll j=0;j<i;j++){
            a=(a*31)%MOD;
        }
        arr[i]=a;
    }
    for (ll i=0;i<s.size();i++){
        ans+=arr[i]*(s[i]-'a'+1);
        ans%=MOD;
    }
    cout << ans;
    return 0;
}