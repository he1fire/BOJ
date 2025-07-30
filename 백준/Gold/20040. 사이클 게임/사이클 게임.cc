#include <bits/stdc++.h>
#define ll long long
using namespace std;
typedef pair<ll,ll> pll;
ll N, M, ans, arr[500005];
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
    for (int i=0;i<500005;i++)
        arr[i]=i;
    for (int i=0;i<M;i++){
        ll a, b;
        cin >> a >> b;
        if (!ans && Find(a)==Find(b))
            ans=i+1;
        else
            Union(a,b);
    }
    cout << ans;
    return 0;
}