#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, M, ans;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M;
    for (int i=0;i<=M;i++)
        ans+=(N-2)*i+1;
    cout << ans;
    return 0;
}