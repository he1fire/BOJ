#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, ans, st, now;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for (int i=0, x;i<N;i++){
        cin >> x;
        if (i==0)
            st=x;
        if (now>=x)
            ans++;
        now=x;
    }
    if (now>=st)
        ans++;
    cout << ans;
    return 0;
}