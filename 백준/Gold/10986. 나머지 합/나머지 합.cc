#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, M, ans, cnt, arr[1005];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M;
    for (int i=0;i<N;i++){
        ll a;
        cin >> a;
        cnt+=a;
        arr[cnt%M]++;
    }
    arr[0]++;
    for (int i=0;i<M;i++)
        ans+=arr[i]*(arr[i]-1)/2;
    cout << ans;
    return 0;
}