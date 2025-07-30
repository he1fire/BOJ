#include <bits/stdc++.h>
#define ll long long
using namespace std;
typedef pair<ll,ll> pll;
ll N, M;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M;
    stack<ll> s[7];
    ll ans=0;
    for (ll i=0;i<N;i++){
        ll a, b;
        cin >> a >> b;
        while (!s[a].empty() && s[a].top()>b){
            s[a].pop();
            ans++;
        }
        if (s[a].empty() || s[a].top()!=b){
            s[a].push(b);
            ans++;
        }
    }
    cout << ans;
    return 0;
}