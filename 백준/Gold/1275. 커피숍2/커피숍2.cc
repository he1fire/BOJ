#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, M, arr[100005];
vector<ll> SegTree;
ll Query(ll n, ll l, ll r, ll st, ll ed){
    if (l>ed || r<st)
        return 0;
    if (l>=st && r<=ed)
        return SegTree[n];
    ll mid=(l+r)/2;
    return Query(n*2,l,mid,st,ed)+Query(n*2+1,mid+1,r,st,ed);
}
ll Update(ll n, ll l, ll r, ll pos, ll x){
    if (l>pos || r<pos)
        return SegTree[n];
    if (l==r)
        return SegTree[n]=x;
    ll mid=(l+r)/2;
    return SegTree[n]=Update(n*2,l,mid,pos,x)+Update(n*2+1,mid+1,r,pos,x);
}
ll Init(ll n, ll l, ll r){
    if (l==r)
        return SegTree[n]=arr[l];
    ll mid=(l+r)/2;
    return SegTree[n]=Init(n*2,l,mid)+Init(n*2+1,mid+1,r);
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M;
    for (int i=1;i<=N;i++)
        cin >> arr[i];
    SegTree.resize(4*N);
    Init(1,1,N);
    while (M--){
        ll a, b, c, d;
        cin >> a >> b >> c >> d;
        cout << Query(1,1,N,min(a,b),max(a,b)) << "\n";
        Update(1,1,N,c,d);
    }
    return 0;
}