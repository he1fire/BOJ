#include <bits/stdc++.h>
#define ll long long
#define INF 987654321
using namespace std;
typedef pair<ll,ll> pll;
ll N, ans;
pll jail;
vector<pll> v, up, down;
ll ccw (pll a, pll b, pll c){
    return a.first*(b.second-c.second)+b.first*(c.second-a.second)+c.first*(a.second-b.second);
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> jail.first >> jail.second;
    for (int i=0;i<N;i++){
        ll a, b;
        cin >> a >> b;
        v.push_back({a,b});
    }
    v.push_back(jail);
    while (1){
        int cnt=0;
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
        for (int i=0;i<up.size();i++){
            if (up[i]==jail){
                cnt=1;
                break;
            }
        }
        if (cnt)
            break;
        vector<pll> a;
        for (int i=0;i<v.size();i++){
            int b=1;
            for (int j=0;j<up.size();j++){
                if (v[i]==up[j]){
                    b=0;
                    break;
                }
            }
            if (b)
                a.push_back(v[i]);
        }
        ans++;
        v=a;
        up.clear();
        down.clear();
    }
    cout << ans;
    return 0;
}