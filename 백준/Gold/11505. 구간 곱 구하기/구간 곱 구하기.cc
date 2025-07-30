#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;
ll N, M, K, arr[1000005], siz=1;
vector<ll> v;
ll query(int n, int l, int r, int a, int b){
    if (l>b || r<a)
        return 1;
    if (l>=a && r<=b)
        return v[n];
    int mid=(l+r)/2;
    return (query(n*2,l,mid,a,b)*query(n*2+1,mid+1,r,a,b))%mod;
}
ll update(int n, int l, int r, int pos, int x){
    if (l>pos || r<pos)
        return v[n];
    if (l==r)
        return v[n]=x;
    int mid=(l+r)/2;
    return v[n]=(update(n*2,l,mid,pos,x)*update(n*2+1,mid+1,r,pos,x))%mod;
}
ll init(int n, int l, int r){
    if (l==r)
        return v[n]=arr[l];
    int mid=(l+r)/2;
    return v[n]=(init(n*2,l,mid)*init(n*2+1,mid+1,r))%mod;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M >> K;
    for (int i=1;i<=N;i++)
        cin >> arr[i];
    v.resize(4*N);
    init(1,1,N);
    for (int i=0;i<M+K;i++){
        int a, b, c;
        cin >> a >> b >> c;
        if (a==1){
            arr[b]=c;
            update(1,1,N,b,c);
        }
        else
        cout << query(1,1,N,b,c) << "\n";
    }
    return 0;
}