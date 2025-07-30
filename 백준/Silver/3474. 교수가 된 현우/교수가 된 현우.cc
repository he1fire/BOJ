#include <iostream>
using namespace std;
int main () {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int N;
    cin >> N;
    for (int i=0;i<N;i++)
        {
        long long x, ans=0;
        cin >> x;
        for (long long j=5;j<=x;j*=5)
        ans+=x/j;
        cout << ans << "\n";
        }
    return 0;
    }