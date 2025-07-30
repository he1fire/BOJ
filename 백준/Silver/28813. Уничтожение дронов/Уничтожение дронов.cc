#include <bits/stdc++.h>
#define ll long long
#define INF 1e9+7
#define MOD (ll)(1e9+7)
using namespace std;
typedef pair<ll,ll> pll;
ll N, M, ans;
vector<pll> v;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for (int i=0;i<N;i++){
        ll a, b;
        cin >> a >> b;
        v.push_back({max(abs(a),abs(b)),i+1});
    }
    sort(v.begin(),v.end());
    for (int i=0;i<N;i++){
        if (i>=v[i].first){
            cout << "-1";
            return 0;
        }
    }
    for (int i=0;i<N;i++){
        cout << v[i].second << " ";
    }
    return 0;
}