#include <bits/stdc++.h>
#define ll long long
using namespace std;
struct xy{
    ll x, y;
    bool operator<(const xy& tmp) const {
        if (x!=tmp.x)
            return x<tmp.x;
        return y<tmp.y;
    }
};
ll N, M, dir[4][2]={{0,2},{0,-2},{2,0},{-2,0}};
set<xy> s, ans;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M;
    while (M--){
        ll a, b;
        cin >> a >> b;
        s.insert({a,b});
    }
    for (auto i:s){
        for (int j=0;j<4;j++){
            ll dx=i.x+dir[j][0], dy=i.y+dir[j][1];
            if (dx<=0 || dx>N || dy<=0 || dy>N || s.find({dx,dy})!=s.end())
                continue;
            ans.insert({dx,dy});
        }
    }
    cout << ans.size();
    return 0;
}