#include <bits/stdc++.h>
#define ll long long
#define INF 987654321
#define MOD 1000000007
using namespace std;
typedef pair<ll,ll> pll;
ll N, M, chk, arr[300005];
vector<ll> seg;
ll Query(ll n, ll l, ll r, ll a, ll b){
    if (l>b || r<a)
        return 0;
    if (l>=a && r<=b)
        return seg[n];
    ll mid=(l+r)/2;
    return Query(n*2,l,mid,a,b)+Query(n*2+1,mid+1,r,a,b);
}

ll Update(ll n, ll l, ll r, ll pos, ll x){
    if (l>pos || r<pos)
        return seg[n];
    if (l==r)
        return seg[n]=x;
    ll mid=(l+r)/2;
    return seg[n]=Update(n*2,l,mid,pos,x)+Update(n*2+1,mid+1,r,pos,x);
}

ll Init(ll n, ll l, ll r){
    if (l==r)
        return seg[n]=arr[l];
    ll mid=(l+r)/2;
    return seg[n]=Init(n*2,l,mid)+Init(n*2+1,mid+1,r);
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M;
    for (ll i=1;i<=N;i++){
        ll a;
        cin >> a;
        if (i%2==1)
            arr[i]=a;
        else
            arr[i]=-a;
    }
    seg.resize(4*N);
    Init(1,1,N);
    for (ll i=0;i<M;i++){
        ll a, b, c;
        cin >> a >> b >> c;
        if (a==1)
            cout << abs(Query(1,1,N,b,c)) << "\n";
        else{
            if (b%2==1)
                arr[b]+=c;
            else
                arr[b]-=c;
            Update(1,1,N,b,arr[b]);
        }
    }
    return 0;
}