#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll a, b, c, d, x, cnt;
    cin >> a >> b >> c >> d >> x;
    cnt=abs(a-c)+abs(b-d);
    if (cnt<=x && (x-cnt)%2==0)
        cout << "Y";
    else
        cout << "N";
    return 0;
}