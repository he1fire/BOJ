#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, M, ans;
vector<ll> v;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M;
    while (N--){
        ll a;
        cin >> a;
        v.push_back(a);
    }
    sort(v.rbegin(),v.rend());
    for (int i=0;i<M;i++)
        ans+=v[i];
    cout << ans;
    return 0;
}