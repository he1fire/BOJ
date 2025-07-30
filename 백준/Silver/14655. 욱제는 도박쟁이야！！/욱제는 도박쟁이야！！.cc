#include <iostream>
#include <algorithm>
#define ll long long
using namespace std;
int main () {
    ll N, ans=0;
    cin >> N;
    for (ll i=0;i<N*2;i++){
        int a;
        cin >> a;
        ans+=max(a,-a);
    }
    cout << ans;
    return 0;
}