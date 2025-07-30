#include <bits/stdc++.h>
#define ll long long
using namespace std;
typedef pair<ll,ll> pll;
struct ABC{
    ll idx, val;
    ABC() {}
    ABC(ll idx, ll val): idx(idx), val(val) {}
};
bool operator<(ABC x, ABC y){
    if (x.idx!=y.idx)
        return x.idx>y.idx;
    return x.val<y.val;
}
ll N, L, P, ans;
priority_queue<ABC> pq;
priority_queue<ll> oil;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    while (N--){
        ll a, b;
        cin >> a >> b;
        pq.push({a,b});
    }
    cin >> L >> P;
    while (P<L){
        while (!pq.empty() && pq.top().idx<=P){
            oil.push(pq.top().val);
            pq.pop();
        }
        if (oil.empty()){
            ans=-1;
            break;
        }
        else {
            ans++;
            P+=oil.top();
            oil.pop();
        }
    }
    cout << ans;
    return 0;
}