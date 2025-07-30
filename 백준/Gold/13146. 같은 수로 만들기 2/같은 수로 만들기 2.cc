#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, ans;
deque<ll> dq;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    while (N--){
        ll x;
        cin >> x;
        if (dq.empty() || dq.back()>=x)
            dq.push_back(x);
        else {
            ll y=dq.back();
            ans+=x-y;
            while (!dq.empty() && dq.back()<x)
                dq.pop_back();
            dq.push_back(x);
        }
    }
    cout << ans+dq.front()-dq.back();
    return 0;
}