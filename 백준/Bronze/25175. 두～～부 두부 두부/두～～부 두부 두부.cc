#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, M, K, ans;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M >> K;
    ans=M+K-3;
    if (ans>N)
        ans%=N;
    while (ans<=0)
        ans+=N;
    cout << ans;
    return 0;
}