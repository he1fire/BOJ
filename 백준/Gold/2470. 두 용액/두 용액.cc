#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    vector<ll> v;
    for (ll i=0;i<N;i++){
        ll a;
        cin >> a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    ll ans=2000000001, i=0, j=N-1, a=0, b=0;
    while (i<N && j>i){
        if (ans>abs(v[i]+v[j])){
            ans=min(ans, abs(v[i]+v[j]));
            a=v[i];
            b=v[j];
        }
        if (v[i]+v[j]>0)
            j--;
        else
            i++;
    }
    cout << a << " " << b;
    return 0;
}