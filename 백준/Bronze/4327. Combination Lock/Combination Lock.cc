#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    while(1){
        ll now, a, b, c, ans=120;
        cin >> now >> a >> b >> c;
        if (now==0 && a==0 && b==0 && c==0)
            break;
        ans+=(now-a+40)%40;
        ans+=(b-a+40)%40;
        ans+=(b-c+40)%40;
        cout << ans*9 << "\n";
    }
    return 0;
}