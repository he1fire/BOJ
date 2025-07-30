#include <bits/stdc++.h>
#define ll long long
using namespace std;
struct S{int l,r,x;};
S operator+(S a, S b){
    if (a.r==b.l-1)
        return {a.l,b.r,a.x+b.x};
    return a;
}
ll N;
vector<S> SegTree;
S Update(ll n, ll l, ll r, ll pos, ll x){
    if (l>pos || r<pos)
        return SegTree[n];
    if (l==r){
        SegTree[n].x+=x;
        if (SegTree[n].x)
            SegTree[n].l=SegTree[n].r=pos;
        else
            SegTree[n].l=SegTree[n].r=0;
        return SegTree[n];
    }
    ll mid=(l+r)/2;
    return SegTree[n]=Update(n*2,l,mid,pos,x)+Update(n*2+1,mid+1,r,pos,x);
}
void Init(ll n, ll l, ll r){
    SegTree[n]={0,0,0};
    if (l==r)
        return;
    ll mid=(l+r)/2;
    Init(n*2,l,mid);
    Init(n*2+1,mid+1,r);
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    SegTree.resize(4*1000005);
    Init(1,1,1000001);
    for (int i=0, a, b;i<N;i++){
        cin >> a >> b;
        if (a==1)
            Update(1,1,N,b,1);
        else
            Update(1,1,N,b,-1);
        cout << SegTree[1].x << "\n";
    }
    return 0;
}