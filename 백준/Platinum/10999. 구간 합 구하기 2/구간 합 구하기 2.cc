#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, M, K, arr[1000005];
vector<ll> seg, lazy;
void Propagate(int n, int l, int r){
    if (lazy[n]){
        if (l!=r){
            lazy[n*2]+=lazy[n];
            lazy[n*2+1]+=lazy[n];
        }
        seg[n]+=lazy[n]*(r-l+1);
        lazy[n]=0;
    }
}
ll Query(int n, int l, int r, int a, int b){
    Propagate(n,l,r);
    if (l>b || r<a)
        return 0;
    if (l>=a && r<=b)
        return seg[n];
    int mid=(l+r)/2;
    return Query(n*2,l,mid,a,b)+Query(n*2+1,mid+1,r,a,b);
}
ll Update(int n, int l, int r, int a, int b, ll x){
    Propagate(n,l,r);
    if (l>b || r<a)
        return seg[n];
    if (l>=a && r<=b){
        lazy[n]+=x;
        Propagate(n,l,r);
        return seg[n];
    }
    int mid=(l+r)/2;
    return seg[n]=Update(n*2,l,mid,a,b,x)+Update(n*2+1,mid+1,r,a,b,x);
}
ll Init(int n, int l, int r){
    if (l==r)
        return seg[n]=arr[l];
    int mid=(l+r)/2;
    return seg[n]=Init(n*2,l,mid)+Init(n*2+1,mid+1,r);
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M >> K;
    for (int i=1;i<=N;i++)
        cin >> arr[i];
    seg.resize(4*N);
    lazy.resize(4*N);
    Init(1,1,N);
    for (int i=0;i<M+K;i++){
        ll a, b, c, d;
        cin >> a >> b >> c;
        if (a==1){
            cin >> d;
            Update(1,1,N,b,c,d);
        }
        else
        cout << Query(1,1,N,b,c) << "\n";
    }
    return 0;
}