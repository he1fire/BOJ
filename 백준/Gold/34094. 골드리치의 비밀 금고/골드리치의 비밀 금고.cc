#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, ans;
vector<ll> v;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for (int i=0;i<N;i++){
        ll a;
        cin >> a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    for (int i=0;i<N;i++){
        if (v[i]==ans)
            ans++;
    }
    if (v[N-1]==0)
        cout << "0\n";
    else
        cout << ans+1 << "\n";
    for (auto x:v)
        cout << x << " ";
    return 0;
}