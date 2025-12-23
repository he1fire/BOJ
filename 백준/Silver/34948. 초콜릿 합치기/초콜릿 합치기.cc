#include <bits/stdc++.h>
#define ll long long
using namespace std;
struct st{
    ll x, y;
    bool operator<(st& tmp) {
        if (x!=tmp.x)
            return x>tmp.x;
        return y<tmp.y;
    }
};
ll N, arr[200005], ans;
vector<st> v;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for (ll i=0;i<N;i++)
        cin >> arr[i];
    for (ll i=0;i<N;i++){
        ll a;
        cin >> a;
        v.push_back({arr[i],a});
    }
    sort(v.begin(),v.end());
    ans=v[0].x*v[0].y;
    for (ll i=1;i<N;i++){
        v[i].y+=v[i-1].y;
        ans=max(ans,v[i].x*v[i].y);
    }
    cout << ans;
    return 0;
}