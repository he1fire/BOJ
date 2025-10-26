#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, M;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M;
    if (abs(N-M)%3)
        cout << "-1";
    else
        cout << N/3 << " " << N%3 << " " << M/3;
    return 0;
}