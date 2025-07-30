#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, a, b, c, d, ans=987654321;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> a >> b >> c >> d;
    for (int i=1;1;i++){
        if (a*i>=N)
            ans=min(ans,i*b);
        if (c*i>=N)
            ans=min(ans,i*d);
        if (a*i>=N && c*i>=N)
            break;
    }
    cout << ans;
    return 0;
}