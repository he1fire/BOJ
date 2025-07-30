#include <bits/stdc++.h>
#define ll long long
#define INF 987654321
using namespace std;
typedef pair<ll,ll> pll;
ll N, T;
vector<pll> v, up, down;
ll ccw (pll a, pll b, pll c){
    return a.first*(b.second-c.second)+b.first*(c.second-a.second)+c.first*(a.second-b.second);
}
ll f(pll x, pll y){
    return pow(x.first-y.first,2)+pow(x.second-y.second,2);
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> T;
    while (T--){
        ll ans=0;
        pll X, Y;
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
        for (int i=0, j=down.size()-1; i+1<up.size() || j>0;){
            if(ans<f(up[i],down[j])){
                ans=f(up[i],down[j]);
                X=up[i];
                Y=down[j];
            }
            if (i+1==up.size())
                j--;
            else if (j==0)
                i++;
            else{
                ll ux=up[i+1].first-up[i].first;
                ll uy=up[i+1].second-up[i].second;
                ll dx=down[j].first-down[j-1].first;
                ll dy=down[j].second-down[j-1].second;
                if (uy*dx>dy*ux)
                    i++;
                else
                    j--;
            }
        }
        cout << X.first << " " << X.second << " " << Y.first << " " << Y.second << "\n";
        up.clear();
        down.clear();
        v.clear();
    }
    return 0;
}