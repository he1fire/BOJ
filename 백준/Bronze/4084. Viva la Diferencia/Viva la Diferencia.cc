#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    while (1){
        ll a, b, c, d, ans=0;
        cin >> a >> b >> c >> d;
        if (a==0 && b==0 && c==0 && d==0)
            break;
        while (!(a==b && b==c && c==d)){
            ll aa=abs(a-b), bb=abs(b-c), cc=abs(c-d), dd=abs(d-a);
            a=aa, b=bb, c=cc, d=dd;
            ans++;
        }
        cout << ans << "\n";
    }
    return 0;
}