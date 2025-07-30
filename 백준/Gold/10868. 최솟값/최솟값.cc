#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, M, arr[100005], siz=1;
vector<ll> v;
int query(int n, int l, int r, int a, int b){
    if (l>b || r<a)
        return 2e9;
    if (l>=a && r<=b)
        return v[n];
    int mid=(l+r)/2;
    return min(query(n*2,l,mid,a,b),query(n*2+1,mid+1,r,a,b));
}
int init(int n, int l, int r){
    if (l==r)
        return v[n]=arr[l];
    int mid=(l+r)/2;
    return v[n]=min(init(n*2,l,mid),init(n*2+1,mid+1,r));
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M;
    for (int i=1;i<=N;i++)
        cin >> arr[i];
    v.resize(4*N);
    init(1,1,N);
    while (M--){
        int a, b;
        cin >> a >> b;
        cout << query(1,1,N,a,b) << "\n";
    }
    return 0;
}