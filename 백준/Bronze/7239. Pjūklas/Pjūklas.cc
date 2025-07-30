#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, M, ans;
deque<ll> dq;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for (int i=0;i<N;i++){
        ll a;
        cin >> a;
        dq.push_back(a);
    }
    sort(dq.begin(),dq.end());
    while (!dq.empty()){
        ll x=dq.front();
        cout << x << " ";
        dq.pop_front();
        if (!dq.empty()){
            x=dq.back();
            cout << x << " ";
            dq.pop_back();
        }
    }
    return 0;
}