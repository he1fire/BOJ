#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, ans;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    while (cin >> N){
        if (N==-1)
            break;
        ans+=N;
    }
    cout << ans;
    return 0;
}