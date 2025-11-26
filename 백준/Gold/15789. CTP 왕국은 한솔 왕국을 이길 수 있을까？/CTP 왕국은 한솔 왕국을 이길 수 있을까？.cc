#include <bits/stdc++.h>
#define ll long long
using namespace std;
struct st{
    ll  idx, pw;
    bool operator<(const st& tmp) const {
        return pw>tmp.pw;
    }
};
ll N, M, C, H, K, arr[100005], cnt[100005];
vector<st> v;
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
    for (int i=1;i<=N;i++)
        arr[i]=i;
    for (int i=0;i<M;i++){
        ll a, b;
        cin >> a >> b;
        Union(a,b);
    }
    cin >> C >> H >> K;
    for (int i=1;i<=N;i++)
        cnt[Find(i)]++;
    for (int i=1;i<=N;i++)
        v.push_back({i,cnt[i]});
    sort(v.begin(),v.end());
    for (auto x:v){
        if (!K)
            break;
        if (Find(x.idx)==Find(C) || Find(x.idx)==Find(H))
            continue;
        cnt[Find(C)]+=x.pw;
        Union(x.idx,C);
        K--;
    }
    cout << cnt[Find(C)];
    return 0;
}