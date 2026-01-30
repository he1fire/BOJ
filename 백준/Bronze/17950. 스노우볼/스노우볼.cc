#include <bits/stdc++.h>
#define ll long long
#define MOD (ll)(1e9+7)
using namespace std;
ll N, M, ans;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M;
    for (ll i=0,x=M,a;i<N;i++,x=(x*M)%MOD){
        cin >> a;
        ans=(ans+a*x)%MOD;
    }
    cout << ans;
    return 0;
}