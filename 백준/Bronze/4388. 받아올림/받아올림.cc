#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    while (1){
        ll a, b, ans=0;
        cin >> a >> b;
        if (a==0 && b==0)
            break;
        for (int i=0;a>0 || b>0;a/=10, b/=10){
            ll x=a%10, y=b%10;
            if (x+y+i>9){
                ans++;
                i=1;
            }
            else{
                i=0;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}