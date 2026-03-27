#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll T;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> T;
    for (ll i=0;i<T;i++){
        ll N, M, K, ans=0;
        cin >> N >> M >> K;
        if (N>M*K && M*K==1){
            cout << "-1\n";
            continue;
        }
        while (N>M*K){
            N-=M*K-1;
            ans+=2;
        }
        ans++;
        cout << ans << "\n";
    }
    return 0;
}