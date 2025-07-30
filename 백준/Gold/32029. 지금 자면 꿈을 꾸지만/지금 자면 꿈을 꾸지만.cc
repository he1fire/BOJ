#include <bits/stdc++.h>
#define ll long long
#define INF 1e9+7
#define MOD (ll)(1e9+7)
using namespace std;
typedef pair<ll,ll> pll;
ll N, M, K, ans;
vector<ll> v;
ll f(ll y, ll x){
    ll chk=0, ret=0;
    priority_queue<ll, vector<ll>, greater<ll> > pq;
    for (auto i:v)
        pq.push(i);
    while (y-- && !pq.empty()){
        ll now=pq.top();
        pq.pop();
        if (chk+M<=now){
            chk+=M;
            ret++;
        }
    }
    chk+=x*K;
    while (!pq.empty()){
        ll now=pq.top();
        pq.pop();
        if (chk+(M-x)<=now){
            chk+=(M-x);
            ret++;
        }
    }
    return ret;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M >> K;
    for  (int i=0,a;i<N;i++){
        cin >> a;
        v.push_back(a);
    }
    for (int i=0;i<N;i++){ // 미리한거
        for (int j=0;j<M;j++){ // 잠자는 시간
            ans=max(ans,f(i, j));
        }
    }
    
    cout << ans;
    return 0;
}