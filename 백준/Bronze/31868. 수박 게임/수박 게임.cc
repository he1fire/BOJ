#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, M;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M;
    cout << M/(1<<(N-1));
    return 0;
}