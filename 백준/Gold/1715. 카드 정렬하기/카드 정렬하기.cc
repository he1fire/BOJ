#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, ans;
priority_queue<ll, vector<ll>, greater<ll>> pq;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for (int i=0;i<N;i++){
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
        pq.push(a+b);
        ans+=a+b;
    }
    cout << ans;
    return 0;
}