#include <bits/stdc++.h>
#define ll long long
using namespace std;
struct st{
    ll a, b;
};
ll N, M, chk[505], ans;
st arr[505];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for (ll i=1;i<=N;i++){
        ll a, b;
        cin >> a >> b;
        arr[i].a=a;
        arr[i].b=b;
    }
    cin >> M;
    chk[0]=1;
    while (M--){
        ll a;
        cin >> a;
        chk[a]=1;
    }
    for (ll i=1;i<=N;i++){
        if (chk[i] || chk[arr[i].a] || chk[arr[i].b])
            continue;
        ans++;
    }
    cout << ans;
    return 0;
}