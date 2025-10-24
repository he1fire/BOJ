#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    while (N--){
        ll a, b;
        cin >> a >> b;
        cout << (a+b)*(a+b)*(a+b-1)/2 << "\n";
    }
    return 0;
}