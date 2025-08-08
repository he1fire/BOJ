#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, ans;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> N;
    for (ll i=1;i<N;i++){
        if (N>=i*2)
            ans+=i;
        else
            ans+=N-i;
    }
    cout << ans << "\n";
    if (ans>1000000)
        return 0;
    for (ll i=1;i<N;i++){
        for (ll j=1;j<=i;j++){
            ll cnt=(N-j)/i;
            if (cnt)
                cout << cnt << " ";
            for (ll k=j;k<=N-i;k+=i)
                cout << k << " " << k+i << " ";
            if (cnt)
                cout << "\n";
        }
    }
    return 0;
}