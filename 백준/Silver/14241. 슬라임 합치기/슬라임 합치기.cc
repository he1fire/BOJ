#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, ans;
priority_queue<ll,vector<ll>,greater<ll>> pq;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    while (N--){
        ll a;
        cin >> a;
        pq.push(a);
    }
    while (pq.size()>1){
        ll a, b;
        a=pq.top();
        pq.pop();
        b=pq.top();
        pq.pop();
        ans+=a*b;
        pq.push(a+b);
    }
    cout << ans;
    return 0;
}