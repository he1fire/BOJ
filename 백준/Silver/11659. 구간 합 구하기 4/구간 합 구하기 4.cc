#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;
ll N, M, K, arr[1000005];
vector<ll> seg;
ll query(int n, int l, int r, int a, int b){
    if (l>b || r<a)
        return 0;
    if (l>=a && r<=b)
        return seg[n];
    int mid=(l+r)/2;
    return query(n*2,l,mid,a,b)+query(n*2+1,mid+1,r,a,b);
}
ll update(int n, int l, int r, int pos, int x){
    if (l>pos || r<pos)
        return seg[n];
    if (l==r)
        return seg[n]=x;
    int mid=(l+r)/2;
    return seg[n]=update(n*2,l,mid,pos,x)+update(n*2+1,mid+1,r,pos,x);
}
ll init(int n, int l, int r){
    if (l==r)
        return seg[n]=arr[l];
    int mid=(l+r)/2;
    return seg[n]=init(n*2,l,mid)+init(n*2+1,mid+1,r);
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M;
    for (int i=1;i<=N;i++)
        cin >> arr[i];
    seg.resize(4*N);
    init(1,1,N);
    for (int i=0;i<M+K;i++){
        ll a, b;
        cin >> a >> b;
        cout << query(1,1,N,a,b) << "\n";
    }
    return 0;
}