#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, M, ans;
deque<ll> dq;
int main () {
    cin >> N >> M;
    for (int i=1;i<=N;i++)
        dq.push_back(i);
    for (int i=0;i<M;i++){
        ll a, idx;
        cin >> a;
        for (int j=0;j<dq.size();j++){
            if (dq[j]==a)
                idx=j;
        }
        if (idx<dq.size()-idx){
            for (int j=0;j<idx;j++){
                ans++;
                ll x=dq.front();
                dq.pop_front();
                dq.push_back(x);
            }
            dq.pop_front();
        }
        else {
            for (int j=0;j<dq.size()-idx;j++){
                ans++;
                ll x=dq.back();
                dq.pop_back();
                dq.push_front(x);
            }
            dq.pop_front();
        }
    }
    cout << ans;
    return 0;
}