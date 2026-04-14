#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, ans;
deque<ll> dq;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    while (N--){
        dq.emplace_back();
        cin >> dq.back();
    }
    sort(dq.begin(),dq.end());
    while(dq.size()>2){
        dq[0]--;
        if (!dq[0])
            dq.pop_front();
        if (!dq.empty())
            dq.pop_back();
        ans++;
    }
    cout << ans+(dq.size()-1);
    return 0;
}