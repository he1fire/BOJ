#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, mx, ans;
int main(){
    cin >> N;
    for (int i=0;i<N;i++){
        ll a;
        cin >> a;
        ans+=a;
        mx=max(mx,a);
    }
    cout << ans-mx;
    return 0;
}