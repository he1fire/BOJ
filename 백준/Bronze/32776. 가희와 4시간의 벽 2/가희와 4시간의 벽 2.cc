#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll a, b, c, d;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> a >> b >> c >> d;
    cout << ((a<=240 || a<=b+c+d) ? "high speed rail" : "flight");
    return 0;
}