#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, ans;
priority_queue<ll> pq;
ll f(){
    ll ret=0, chk=1005;
    priority_queue<ll> tmp;
    while(!pq.empty()){
        ll x=pq.top();
        pq.pop();
        if (x<chk){
            ret++;
            chk=x;
        }
        else
            tmp.push(x);
    }
    pq=tmp;
    return ret;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    while (N--){
        ll a;
        cin >> a;
        pq.push(a);
    }
    ans+=f()+f();
    cout << ans;
    return 0;
}