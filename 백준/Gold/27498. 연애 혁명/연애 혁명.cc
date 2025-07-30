#include <bits/stdc++.h>
#define ll long long
using namespace std;
struct ABC{
    ll x, y, cost;
    ABC() {}
    ABC(ll x, ll y, ll cost): x(x), y(y), cost(cost) {}
};
bool operator<(ABC x, ABC y){
    return x.cost<y.cost;
}

ll N, M, ans, arr[10005];
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
    iota(arr,arr+10005,0);
    cin >> N >> M;
    for (int i=0;i<M;i++){
        ll a, b, c, d;
        cin >> a >> b >> c >> d;
        ans+=c;
        if (d==1){
            ans-=c;
            Union(a,b);
        }
        else
            pq.push({a,b,c});
    }
    while (!pq.empty()){
        ll x=pq.top().x, y=pq.top().y, cost=pq.top().cost;
        pq.pop();
        if (Find(x)==Find(y))
            continue;
        Union(x,y);
        ans-=cost;
    }
    cout << ans;
    return 0;
}