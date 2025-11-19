#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, M, ans, arr[200005];
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M;
    for (int i=1;i<=N;i++){
        if (i%10==1 || i%10==4 || i%10==7)
            arr[i]=1;
        ans+=arr[i];
    }
    for (int i=0;i<M;i++){
        ll a;
        cin >> a;
        ans+=(arr[a]^1);
        ans-=arr[a];
        arr[a]^=1;
        cout << ans << "\n";
    }
    return 0;
}