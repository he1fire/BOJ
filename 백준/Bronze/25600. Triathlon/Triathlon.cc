#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, ans;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for (int i=0;i<N;i++){
        ll a, b, c;
        cin >> a >> b >> c;
        if (a==b+c)
            ans=max(ans, a*(b+c)*2);
        else
            ans=max(ans, a*(b+c));
    }
    cout << ans;
    return 0;
}