#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, M;
deque<ll> dq;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M;
    for (int i=1;i<=N;i++)
        dq.push_back(i);
    while (dq.size()>1){
        ll x=dq[0];
        for (int i=0;i<M && !dq.empty();i++)
            dq.pop_front();
        dq.push_back(x);
    }
    cout << dq[0];
    return 0;
}