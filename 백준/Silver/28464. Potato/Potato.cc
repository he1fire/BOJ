#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, mn, mx;
vector<ll> v;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for (ll i=0,a;i<N;i++){
        cin >> a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    for (ll i=0;i<N;i++){
        if (i<N/2)
            mn+=v[i];
        else
            mx+=v[i];
    }
    cout << mn << " " << mx;
    return 0;
}