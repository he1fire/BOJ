#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, M, arr[1000005];
vector<ll> seg;
ll Query(int n, int l, int r, int a, int b){
    if (l>b || r<a)
        return 0;
    if (l>=a && r<=b)
        return seg[n];
    int mid=(l+r)/2;
    return max(Query(n*2,l,mid,a,b),Query(n*2+1,mid+1,r,a,b));
}
ll Update(int n, int l, int r, int pos, int x){
    if (l>pos || r<pos)
        return seg[n];
    if (l==r)
        return seg[n]=x;
    int mid=(l+r)/2;
    return seg[n]=max(Update(n*2,l,mid,pos,x),Update(n*2+1,mid+1,r,pos,x));
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for (int i=0;i<N;i++)
        cin >> arr[i];
    seg.resize(4*1000000);
    for (int i=0;i<N;i++)
        Update(1,1,1000000,arr[i],Query(1,1,1000000,1,arr[i]-1)+1);
    cout << seg[1];
    return 0;
}