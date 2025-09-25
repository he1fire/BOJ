#include <bits/stdc++.h>
#define ll long long
#define pll pair<ll,ll>
using namespace std;
ll N, M, arr[100005], mn=1e9+7;
vector<pll> v;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for (int i=0;i<N;i++){
        ll a;
        cin >> a;
        v.push_back({a+i,i+1});
    }
    sort(v.begin(),v.end());
    for (int i=N-1;i>=0;i--){
        mn=min(mn,v[i].second);
        arr[i]=mn;
    }
    cin >> M;
    while (M--){
        ll a;
        cin >> a;
        cout << arr[lower_bound(v.begin(),v.end(),(pll){a,0})-v.begin()] << " ";
    }
    return 0;
}