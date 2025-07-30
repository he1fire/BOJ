#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main () {
    ios::sync_with_stdio(0);
    cin.tie(0);
    double N, M, ans=0;
    cin >> N >> M;
    ans=(M-N)/400;
    ans=1/(1+pow(10,ans));
    cout << ans;
    return 0;
}
