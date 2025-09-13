#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, M, ans, arr[1005][2];
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M;
    for (int i=0;i<N;i++)
        cin >> arr[i][0];
    for (int i=0;i<M;i++)
        cin >> arr[i][1];
    for (int i=0;i<max(N,M);i++)
        ans=max(ans,arr[i][1]-arr[i][0]);
    cout << ans;
    return 0;
}