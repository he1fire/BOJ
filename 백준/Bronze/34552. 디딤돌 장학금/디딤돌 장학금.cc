#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, ans, arr[15];
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    for (int i=0;i<=10;i++)
        cin >> arr[i];
    cin >> N;
    while (N--){
        ll a, c;
        double b;
        cin >> a >> b >> c;
        if (b>=2 && c>=17)
            ans+=arr[a];
    }
    cout << ans;
    return 0;
}