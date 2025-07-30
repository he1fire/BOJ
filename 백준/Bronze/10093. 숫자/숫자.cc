#include <iostream>
#include <algorithm>
#define ll long long
using namespace std;
int main () {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll N, M;
    cin >> N >> M;
    if (N>M)
        swap(N,M);
    N==M ? cout << "0\n" : cout << M-N-1 << "\n";
    for (ll i=N+1;i<M;i++)
        cout << i << " ";
    return 0;
}