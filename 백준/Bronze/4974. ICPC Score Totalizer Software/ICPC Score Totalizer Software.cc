#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    while (cin >> N){
        if (N==0)
            break;
        ll ans=0, mx=0, mn=1001;
        for (int i=0;i<N;i++){
            ll a;
            cin >> a;
            ans+=a;
            mx=max(mx,a);
            mn=min(mn,a);
        }
        cout << (ans-mx-mn)/(N-2) << "\n";
    }
    return 0;
}