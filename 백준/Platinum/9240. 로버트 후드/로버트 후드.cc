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
double f(pll x, pll y){
    return sqrt(pow(x.first-y.first,2)+pow(x.second-y.second,2));
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for (int i=0;i<N;i++){
        ll a, b;
        cin >> a >> b;
        v.push_back({a,b});
    }
    sort(v.begin(),v.end());
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
    for (int i=1;i<down.size()-1;i++)
        up.push_back(down[i]);
    double ans=0;
    for (int i=0;i<up.size();i++){
        for (int j=i+1;j<up.size();j++){
            ans=max(ans,f(up[i],up[j]));
        }
    }
    printf("%.9f",ans);
    return 0;
}