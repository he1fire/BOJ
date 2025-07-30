#include <bits/stdc++.h>
#define ll long long
using namespace std;
typedef pair<ll,ll> pll;
ll N, M, K, chk[100005], arr[100005], cnt, ans;
vector<ll> v;
vector<pll> pv;
priority_queue<pll> pq;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M >> K;
    for (int i=0;i<N;i++){
        ll a;
        cin >> a;
        v.push_back(a);
    }
    for (int i=0;i<M;i++){
        ll a, b;
        cin >> a >> b;
        pv.push_back({a,b});
        chk[a-1]++;
        chk[b]--;
    }
    for (int i=0;i<N;i++){
        cnt+=chk[i];
        pq.push({cnt,i});
    }
    while (K && !pq.empty()){
        ll x=pq.top().second;
        pq.pop();
        if (v[x]>K){
            v[x]-=K;
            K=0;
        }
        else{
            K-=v[x];
            v[x]=0;
        }
    }
    for (int i=1;i<=N;i++){
        arr[i]=arr[i-1]+v[i-1];
    }
    for (int i=0;i<M;i++){
        ans+=arr[pv[i].second]-arr[pv[i].first-1];
    }
    cout << ans;
    return 0;
}