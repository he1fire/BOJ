#include <bits/stdc++.h>
#define ll long long
using namespace std;
struct ABC {
    ll x, y, w;
    bool operator<(const ABC& tmp) const{
        return w<tmp.w;
    }
};
int N, M, W, arr[1005], ans;
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
    cin >> N >> M;
    for (int i=0;i<=N;i++)
        arr[i]=i;
    for (int i=0;i<M;i++){
        ll a, b, c;
        cin >> a >> b >> c;
        pq.push({a,b,c});
    }
    cin >> W;
    while (!pq.empty()){
        ll x=pq.top().x, y=pq.top().y, w=pq.top().w;
        pq.pop();
        if (Find(x)==Find(y))
            continue;
        Union(x,y);
        if (W>w)
            ans++;
    }
    cout << ans;
    return 0;
}