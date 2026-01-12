#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, ans;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    while (N--){
        ll a, b, x=0;
        cin >> a >> b;
        while (x+a+b<=ans)
            x+=a+b;
        if (ans-x<b)
            ans+=b-(ans-x)+1;
        else
            ans++;
    }
    cout << ans;
    return 0;
}