#include <bits/stdc++.h>
#define ll long long
#define INF 1e9+7
using namespace std;
struct box{
    ll idx, val;
    bool operator<(box& tmp){
        return idx<tmp.idx;
    }
};
ll N, C, M, ans, now;
vector<box> v[2005];
deque<box> dq;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> C >> M;
    while (M--){
        ll a, b, c;
        cin >> a >> b >> c;
        v[a].push_back({b,c});
    }
    for (int i=1;i<=N;i++){
        while (!dq.empty() && dq.front().idx==i){
            now-=dq.front().val;
            ans+=dq.front().val;
            dq.pop_front();
        }
        sort(v[i].begin(),v[i].end());
        for (int j=0;j<v[i].size();j++){
            dq.push_back(v[i][j]);
            now+=v[i][j].val;
        }
        sort(dq.begin(),dq.end());
        while (now>C){
            ll x=dq.back().val;
            if (now-x>=C){
                dq.pop_back();
                now-=x;
            }
            else{
                dq.back().val-=now-C;
                now=C;
            }
        }
    }
    cout << ans;
    return 0;
}