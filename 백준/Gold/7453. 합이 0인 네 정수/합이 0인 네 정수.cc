#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N;
vector<ll> v1, v2, v3, v4, A, B;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for (ll i=0;i<N;i++){
        ll a, b, c, d;
        cin >> a >> b >> c >> d;
        v1.push_back(a);
        v2.push_back(b);
        v3.push_back(c);
        v4.push_back(d);
    }
    for (ll i=0;i<N;i++){
        for (ll j=0;j<N;j++){
            A.push_back(v1[i]+v2[j]);
            B.push_back(v3[i]+v4[j]);
        }
    }
    sort(A.begin(),A.end());
    sort(B.begin(),B.end());
    ll ans=0;
    for (ll i=0;i<A.size();i++){
        ll lo=lower_bound(B.begin(),B.end(),-A[i])-B.begin();
        ll hi=upper_bound(B.begin(),B.end(),-A[i])-B.begin();
        if (-A[i]==B[lo])
            ans+=hi-lo;
    }
    cout << ans;
    return 0;
}