#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, L, R, ans=1;
vector<ll> v;
map<ll,ll> m;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for (ll i=0;i<N;i++){
        v.emplace_back();
        cin >> v.back();
    }
    m[v[0]]++;
    while (1){
        if (R==N-1)
            break;
        R++;
        m[v[R]]++;
        while (m.size()>2){
            m[v[L]]--;
            if (m[v[L]]==0)
                m.erase(v[L]);
            L++;
        }
        ll cnt=0;
        for (auto x:m)
            cnt+=x.second;
        ans=max(ans,cnt);
    }
    cout << ans;
    return 0;
}