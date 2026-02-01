#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, ans, chk;
stack<ll> s;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    while (N--){
        ll a;
        cin >> a;
        s.push(a);
    }
    while (!s.empty()){
        ll x=s.top();
        s.pop();
        if (x<chk)
            ans++;
        chk=x;
    }
    cout << ans+1;
    return 0;
}