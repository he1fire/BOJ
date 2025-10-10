#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, ans=-1;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    while (N--){
        ll a, b;
        cin >> a >> b;
        if (!b){
            if (ans==-1)
                ans=a;
            else
                ans=min(ans,a);
        }
    }
    cout << ans;
    return 0;
}