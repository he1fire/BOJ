#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll N, a, b, ans=1;
    cin >> N >> a >> b;
    a--;
    b--;
    while (a/2!=b/2){
        a/=2;
        b/=2;
        ans++;
    }
    cout << ans;
    return 0;
}