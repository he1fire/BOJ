#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, ans, cnt;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for (int i=0;i<N;i++){
        string a;
        ll b, c, d, tmp;
        cin >> a >> b >> c >> d;
        if (a=="A"){
            tmp=(b/12)*(c/12)*(d/12);
            cnt+=tmp*4000;
            ans+=1000+tmp*500;
        }
        else
            ans+=6000;
    }
    cout << ans << "\n" << cnt;
    return 0;
}