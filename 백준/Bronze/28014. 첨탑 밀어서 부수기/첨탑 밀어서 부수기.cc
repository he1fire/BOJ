#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, ans, x;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    while (N--){
        ll a;
        cin >> a;
        if (a>=x)
            ans++;
        x=a;
    }
    cout << ans;
    return 0;
}