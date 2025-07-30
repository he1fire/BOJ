#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll a, b, c, d;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> a >> b >> c >> d;
    if ((a>=(c+1)/2 && b>=d) ||(a>=(d+1)/2 && b>=c))
        cout << "YES";
    else
        cout << "NO";
    return 0;
}