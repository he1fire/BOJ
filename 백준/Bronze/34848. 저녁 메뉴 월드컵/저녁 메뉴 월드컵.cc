#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for (ll i=0;i<N;i++){
        ll x, ans=0;
        cin >> x;
        while (x>1){
            ll tmp=x%2;
            x=x/2+tmp;
            ans+=tmp;
        }
        cout << ans << "\n";
    }
    return 0;
}