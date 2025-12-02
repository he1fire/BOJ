#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, ans=1;
string S[105];
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll N;
    cin >> N;
    for (ll i=0;i<N;i++)
        cin >> S[i];
    for (ll i=0;i<N;i++){
        for (ll j=0;j<N;j++){
            if (S[i][j]!=S[j][i])
                ans=0;
        }
    }
    cout << (ans ? "YES" : "NO");
    return 0;
}