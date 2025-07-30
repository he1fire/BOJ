#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, ans, now;
ll f(ll x){
    string s=to_string(x);
    return (s.find("50")!=string::npos);
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    while (now!=N){
        if (f(now))
            ans++;
        ans++;
        now++;
    }
    cout << ans;
    return 0;
}