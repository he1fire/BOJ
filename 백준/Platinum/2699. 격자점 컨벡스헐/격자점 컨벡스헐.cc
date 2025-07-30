#include <bits/stdc++.h>
#define ll long long
#define INF 987654321
using namespace std;
typedef pair<ll,ll> pll;
ll N, T;
vector<pll> v, up, down;
set<pll> s;
ll ccw (pll a, pll b, pll c){
    return a.first*(b.second-c.second)+b.first*(c.second-a.second)+c.first*(a.second-b.second);
}
bool cmp(pll &a, pll &b){
    if (a.second != b.second)
        return a.second > b.second;
    return a.first < b.first;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> T;
    while (T--){
        cin >> N;
        for (int i=0;i<N;i++){
            ll a, b;
            cin >> a >> b;
            v.push_back({a,b});
        }
        sort(v.begin(),v.end(),cmp);
        for (int i=0;i<v.size();i++){
            //시계방향
            while (up.size()>=2 && ccw(up[up.size()-2],up[up.size()-1],v[i])>=0)
                up.pop_back();
            up.push_back(v[i]);
            //반시계방향
            while (down.size()>=2 && ccw(down[down.size()-2],down[down.size()-1],v[i])<=0)
                down.pop_back();
            down.push_back(v[i]);
        }
        reverse(down.begin(),down.end());
        cout << up.size()+down.size()-2 << "\n";
        for (int i=0;i<up.size();i++)
            cout << up[i].first << " " << up[i].second << "\n";
        for (int i=1;i<down.size()-1;i++)
            cout << down[i].first << " " << down[i].second << "\n";
        up.clear();
        down.clear();
        v.clear();
        s.clear();
    }
    return 0;
}

