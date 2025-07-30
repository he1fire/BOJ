#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, M, arr[100005], siz=1;
vector<ll> v1, v2;
int query1(int n, int l, int r, int a, int b){
    if (l>b || r<a)
        return 2e9;
    if (l>=a && r<=b)
        return v1[n];
    int mid=(l+r)/2;
    return min(query1(n*2,l,mid,a,b),query1(n*2+1,mid+1,r,a,b));
}
int init1(int n, int l, int r){
    if (l==r)
        return v1[n]=arr[l];
    int mid=(l+r)/2;
    return v1[n]=min(init1(n*2,l,mid),init1(n*2+1,mid+1,r));
}
int query2(int n, int l, int r, int a, int b){
    if (l>b || r<a)
        return 0;
    if (l>=a && r<=b)
        return v2[n];
    int mid=(l+r)/2;
    return max(query2(n*2,l,mid,a,b),query2(n*2+1,mid+1,r,a,b));
}
int init2(int n, int l, int r){
    if (l==r)
        return v2[n]=arr[l];
    int mid=(l+r)/2;
    return v2[n]=max(init2(n*2,l,mid),init2(n*2+1,mid+1,r));
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M;
    for (int i=1;i<=N;i++)
        cin >> arr[i];
    v1.resize(4*N);
    v2.resize(4*N);
    init1(1,1,N);
    init2(1,1,N);
    while (M--){
        int a, b;
        cin >> a >> b;
        cout << query1(1,1,N,a,b) << " " << query2(1,1,N,a,b)<< "\n";
    }
    return 0;
}