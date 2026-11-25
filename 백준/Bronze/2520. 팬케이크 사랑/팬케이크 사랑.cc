#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll T;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> T;
    while (T--){
        ll a, b, c, d, e, x=0, y=0;
        cin >> a >> b >> c >> d >> e;
        x=min({a*2, b*2, c*4, d*16, e*16/9});
        cin >> a >> b >> c >> d;
        y=a+b/30+c/25+d/10;
        cout << min(x,y) << "\n";
    }
    return 0;
}