#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll a, b, c, ans=1;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> a >> b >> c;
    while (b){
        if (b%2) ans=ans*a%c;
        a=a*a%c;
        b/=2;
    }
    cout << ans;
    return 0;
}