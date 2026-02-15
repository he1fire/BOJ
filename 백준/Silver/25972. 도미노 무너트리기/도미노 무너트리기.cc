#include <bits/stdc++.h>
#define ll long long
using namespace std;
struct st{
    ll x, y;
    bool operator<(const st& tmp) const {
        return x>tmp.x;
    }
};
ll N, cnt, ans;
priority_queue<st> pq;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    while (N--){
        ll a, b;
        cin >> a >> b;
        pq.push({a,b});
    }
    while (!pq.empty()){
        st now=pq.top();
        pq.pop();
        if (cnt<now.x)
            ans++;
        cnt=now.x+now.y;
    }
    cout << ans;
    return 0;
}