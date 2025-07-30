#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll x, y, A, B, C, ans;
int main(){
    cin >> x >> y >> A >> B >> C;
    if (x<0)
        ans+=(0-x)*A+B+y*C;
    else
        ans+=(y-x)*C;
    cout << ans;
    return 0;
}