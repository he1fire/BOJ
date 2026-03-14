#include <bits/stdc++.h>
#define ll long long
#define INF 1e9+7
using namespace std;
ll N, ans;
vector<ll> v[100005];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for (ll i=0;i<N;i++){
        ll a, b;
        cin >> a >> b;
        v[b].push_back(a);
    }
    for (ll i=1;i<=N;i++){
        sort(v[i].begin(),v[i].end());
        if (v[i].size()<2)
            continue;
        for (ll j=0;j<v[i].size();j++){
            ll x=INF, y=INF;
            if (j<v[i].size()-1)
                x=abs(v[i][j]-v[i][j+1]);
            if (0<j)
                y=abs(v[i][j]-v[i][j-1]);
            ans+=min(x,y);
        }
    }
    cout << ans;
    return 0;
}