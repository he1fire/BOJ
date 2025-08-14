#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll T, N, M, arr[6], ans;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> T;
    for (int i=0;i<6;i++)
        cin >> arr[i];
    cin >> N >> M;
    for (int i=0;i<6;i++)
        ans+=(arr[i]+N-1)/N;
    cout << ans << "\n" << T/M << " " << T%M;
    return 0;
}