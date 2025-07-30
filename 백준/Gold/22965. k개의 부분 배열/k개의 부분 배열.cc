#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, ans, mn=1e9+7, chk=1;
deque<ll> dq;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for (int i=0;i<N;i++){
        ll a;
        cin >> a;
        if (!dq.empty() && a<dq.back())
            chk=2;
        dq.push_back(a);
        mn=min(mn,a);
    }
    if (chk>1){
        while (1){
            if (dq.front()==mn)
                break;
            ll x=dq.front();
            dq.pop_front();
            dq.push_back(x);
        }
        for (int i=1;i<N;i++){
            if (dq[i]<dq[i-1])
                chk=3;
        }
    }
    cout << chk;
    return 0;
}