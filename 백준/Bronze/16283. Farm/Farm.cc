#include <bits/stdc++.h>
#define ll long long
#define INF 1000000007
using namespace std;
typedef pair<ll,ll> pll;
ll a, b, n, w;
vector<pll> v;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> a >> b >> n >> w;
    for (int i=1;i<n;i++){
        if (i*a+(n-i)*b==w)
            v.push_back({i,n-i});
    }
    v.size()==1 ? cout << v[0].first << " " << v[0].second : cout << "-1";
    return 0;
}