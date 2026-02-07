#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N;
bool f(ll x){
    priority_queue<ll> a, b;
    for (ll i=1;i*i<=x;i++){
        if (x%i==0){
            a.push(i+x/i);
            b.push(abs(i-x/i));
        }
    }
    while (!a.empty() && !b.empty()){
        ll aa=a.top(), bb=b.top();
        if (aa==bb)
            return 1;
        if (aa<bb)
            b.pop();
        else
            a.pop();
    }
    return 0;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    while (N--){
        ll a;
        cin >> a;
        cout << a << " is " << (f(a) ? "nasty\n" : "not nasty\n");
    }
    return 0;
}