#include <bits/stdc++.h>
#define ll long long
#define INF 1e9+7
#define MOD (ll)(1e9+7)
using namespace std;
typedef pair<ll,ll> pll;
struct ABC{
    ll a, b, c;
    ABC() {}
    ABC(ll a, ll b, ll c): a(a), b(b), c(c) {}
};
bool operator<(ABC x, ABC y){
    return x.c>y.c;
}
ll N, M, S, arr[2005], ans;
priority_queue<ABC> pq;
ll Find(ll x){
    if (x==arr[x])
        return x;
    return arr[x]=Find(arr[x]);
}
void Union(ll x, ll y){
    arr[Find(x)]=Find(y);
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    iota(arr,arr+2000,0);
    cin >> N >> M >> S;
    for (int i=0;i<M;i++){
        ll a, b, c;
        cin >> a >> b >> c;
        pq.push({a,b,c});
    }
    while (N--)
        cin >> S;
    while(!pq.empty()){
        ll x=pq.top().a, y=pq.top().b, now=pq.top().c;
        pq.pop();
        if (Find(x)!=Find(y)){
            ans+=now;
            Union(x,y);
        }
    }
    cout << ans;
    return 0;
}