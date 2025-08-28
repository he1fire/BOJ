#include <bits/stdc++.h>
#define ll long long
using namespace std;
struct wifi{
    ll x, y, e;
};
ll N, ans;
vector<wifi> v;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for (int i=0;i<=N;i++){
        ll x, y, e;
        cin >> x >> y >> e;
        v.push_back({x,y,e});
    }
    for (int i=1;i<=N;i++){
        ll tmp=0;
        for (int j=1;j<=N;j++)
            tmp-=max((ll)0,v[j].e-(abs(v[i].x-v[j].x)+abs(v[i].y-v[j].y)));
        tmp+=max((ll)0,v[0].e-(abs(v[i].x-v[0].x)+abs(v[i].y-v[0].y)));
        ans=max(ans,tmp);
    }
    if (ans)
        cout << ans;
    else
        cout << "IMPOSSIBLE";
    return 0;
}