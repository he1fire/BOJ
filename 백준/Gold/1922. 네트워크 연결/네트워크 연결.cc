#include <bits/stdc++.h>
#define ll long long
#define INF 987654321
#define MOD 1000000007
using namespace std;
typedef pair<ll,ll> pll;
struct ABC {
    ll a, b, x;
    ABC() {}
    ABC(ll a, ll b, ll x) : a(a), b(b), x(x) {}
};
bool operator<(ABC a, ABC b){
    return a.x > b.x;
}
ll N, M, ans, arr[1005];
priority_queue<ABC> pq;
int Find(ll x){
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
    cin >> N >> M;
    for (int i=0;i<=1000;i++)
        arr[i]=i;
    for (int i=0;i<M;i++){
        ll a, b, c;
        cin >> a >> b >> c;
        pq.push({a,b,c});
    }
    while (!pq.empty()){
        ABC now=pq.top();
        pq.pop();
        if (Find(now.a)==Find(now.b))
            continue;
        Union(now.a,now.b);
        ans+=now.x;
    }
    cout << ans;
    return 0;

}