#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, M, x, ans;
vector<ll> v;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M;
    for (int i=0;i<M;i++){
        ll a;
        cin >> a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    for (int i=0;i<M;i++){
        if (ans<min(M-i,N)*v[i]){
            ans=min(M-i,N)*v[i];
            x=v[i];
        }
    }
    cout << x << " " << ans;
    return 0;
}