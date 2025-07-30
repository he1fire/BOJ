#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll a, b, c;
    cin >> a >> b >> c;
    a=abs(a);
    b=abs(b);
    if (a+b==c || (a+b<c && (c-(a+b))%2==0))
        cout << "YES";
    else
        cout << "NO";
    return 0;
}