#include <bits/stdc++.h>
#define ll long long
#define INF 1e9+7
using namespace std;
typedef pair<ll,ll> pll;
ll N, M, dir[2], arr[100005];
vector<pll> chk;
ll f(ll x){
    ll ret=1;
    for (int i=0;i<M;i++){
        if (chk[i].first<=x && x<=chk[i].second){
            ret=0;
            break;
        }
    }
    return ret;
}
void dp(){
    fill(&arr[0],&arr[100004],INF);
    arr[0]=0;
    for (int i=1;i<=N;i++){
        if (!f(i))
            continue;
        ll mn=INF;
        for (int j=0;j<2;j++){
            ll x=i-dir[j];
            if (x>=0 && arr[x]!=INF)
                mn=min(mn,arr[x]+1);
        }
        arr[i]=mn;
    }
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M >> dir[0] >> dir[1];
    for (int i=0;i<M;i++){
        ll a, b;
        cin >> a >> b;
        chk.push_back({a,b});
    }
    dp();
    cout << (arr[N]==INF ? -1 : arr[N]);
    return 0;
}