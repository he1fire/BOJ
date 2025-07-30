#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
#define ll long long
int main () {
    ll N, M, ans=0, cnt=0;
    vector<ll> x;
    cin >> N >> M;
    for (ll i=0;i<N;i++)
        {
        ll a;
        cin >> a;
        x.push_back(a);
        }
    for (ll i=0;i<N;i++)
        {
        if (i<M)
        cnt+=x[i];
        else
        cnt+=(x[i]-x[i-M]);
        ans=max(ans,cnt);
        }
    cout << ans;
    return 0;
    }