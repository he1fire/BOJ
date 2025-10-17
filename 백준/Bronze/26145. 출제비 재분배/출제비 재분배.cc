#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, M, arr[2005];
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M;
    for (int i=0;i<N;i++)
        cin >> arr[i];
    for (int i=0;i<N;i++){
        ll cnt=0;
        for (int j=0;j<N+M;j++){
            ll x;
            cin >> x;
            arr[j]+=x;
            cnt+=x;
        }
        arr[i]-=cnt;
    }
    for (int i=0;i<N+M;i++)
        cout << arr[i] << " ";
    return 0;
}