#include <bits/stdc++.h>
#define ll long long
using namespace std;
typedef pair<ll,ll> pll;
ll N, M, ans;
deque<pll> dq, dq1, dq2;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M;
    for (int i=0;i<M;i++)
        dq.push_back({0,i});
    for (int i=0;i<N;i++){
        string s;
        cin >> s;
        while (!dq.empty()){
            ll len=dq.front().first, idx=dq.front().second;
            dq.pop_front();
            if (s[idx]=='1')
                dq1.push_back({len+1, idx});
            else
                dq2.push_back({0, idx});
        }
        while (!dq1.empty()){
            dq.push_back(dq1.front());
            dq1.pop_front();
        }
        while (!dq2.empty()){
            dq.push_back(dq2.front());
            dq2.pop_front();
        }
        for (int j=0;j<M;j++)
            ans=max(ans,(j+1)*dq[j].first);
    }
    cout << ans;
    return 0;
}