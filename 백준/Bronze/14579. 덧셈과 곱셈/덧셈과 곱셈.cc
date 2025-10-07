#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll a, b, ans=1;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> a >> b;
    for (int i=a;i<=b;i++){
        ans*=i*(i+1)/2;
        ans%=14579;
    }
    cout << ans;
    return 0;
}