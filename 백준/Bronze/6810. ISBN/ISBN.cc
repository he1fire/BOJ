#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll ans=91;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    for (ll i=0,a;i<3;i++){
        cin >> a;
        ans+=(i%2 ? a*3 : a);
    }
    cout << "The 1-3-sum is " << ans;
    return 0;
}