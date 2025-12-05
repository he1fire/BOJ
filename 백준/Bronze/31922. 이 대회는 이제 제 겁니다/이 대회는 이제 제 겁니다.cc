#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll a, b, c;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> a >> b >> c;
    cout << max(a+c,b);
    return 0;
}