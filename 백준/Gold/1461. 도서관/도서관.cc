#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, M, mx, ans;
priority_queue<ll> pq1, pq2;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M;
    for (int i=0;i<N;i++){
        ll a;
        cin >> a;
        if (a>0)
            pq1.push(a);
        else
            pq2.push(-a);
        mx=max(mx,abs(a));
    }
    while (!pq1.empty()){
        ans+=pq1.top()*2;
        for (int i=0;i<M;i++){
            if (!pq1.empty())
                pq1.pop();
        }
    }
    while (!pq2.empty()){
        ans+=pq2.top()*2;
        for (int i=0;i<M;i++){
            if (!pq2.empty())
                pq2.pop();
        }
    }
    cout << ans-mx;
    return 0;
}