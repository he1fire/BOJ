#include <bits/stdc++.h>
#define ll long long
using namespace std;
vector<pair<ll,ll> > v;
ll N, M, ans;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M;
    for (int i=0;i<N;i++){
        int a, b;
        cin >> a >> b;
        v.push_back({a,b});
    }
    for (int i=0;i<M;i++){
        ll cnt=0;
        ll a, b;
        cin >> a >> b;
        for (int j=0;j<N;j++)
            cnt=max(cnt,(ll)(pow(a-v[j].first,2)+pow(b-v[j].second,2)));
        ans=max(ans,cnt);
    }
    cout << ans;
    return 0;
}