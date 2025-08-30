#include <bits/stdc++.h>
#define ll long long
#define pll pair<ll,ll>
using namespace std;
ll N, M, K, Q;
ll arr[5005], sleep[5005];
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> K >> Q >> M;
    while (K--){
        ll x;
        cin >> x;
        sleep[x]=1;
    }
    while (Q--){
        ll x;
        cin >> x;
        if (!sleep[x]){
            for (int i=x;i<=N+2;i+=x){
                if (!sleep[i])
                    arr[i]=1;
            }
        }
    }
    for (int i=1;i<=N+2;i++)
        arr[i]+=arr[i-1];
    while (M--){
        ll a, b;
        cin >> a >> b;
        cout << (b-a+1)-(arr[b]-arr[a-1]) << "\n";
    }
    return 0;
}