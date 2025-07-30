#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, M;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M;
    ll ans=1;;
    for (ll i=1;i<=N;i++){
        ans*=i;
        ans%=M;
    }
    cout << ans;
    return 0;
}