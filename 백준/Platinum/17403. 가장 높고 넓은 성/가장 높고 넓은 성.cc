#include <bits/stdc++.h>
#define ll long long
#define INF 987654321
#define MOD 1000000007
using namespace std;
typedef pair<ll,ll> pll;
ll N, M;
vector<pll> arr, up, down;
vector<pair<pll,ll> > chk;
ll ccw(pll a, pll b, pll c){
    ll x=a.first*(b.second-c.second)+b.first*(c.second-a.second)+c.first*(a.second-b.second);
    if (x>0) return 1;
    else if (x<0) return -1;
    else return 0;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for (int i=0;i<N;i++){
        ll a, b;
        cin >> a >> b;
        arr.push_back({a,b});
        chk.push_back({{a,b},0});
    }
    for (int hi=1;1;hi++){
        if (arr.empty())
            break;
        sort(arr.begin(),arr.end());
        for (int i=0;i<arr.size();i++){
            while (up.size()>=2 && ccw(up[up.size()-2],up[up.size()-1],arr[i])>=0)
                up.pop_back();
            up.push_back(arr[i]);
            while (down.size()>=2 && ccw(down[down.size()-2],down[down.size()-1],arr[i])<=0)
                down.pop_back();
            down.push_back(arr[i]);
        }
        for (int i=1;i<down.size()-1;i++)
            up.push_back(down[i]);
        if (up.size()<=2)
            break;
        vector<pll> a;
        for (int i=0;i<arr.size();i++){
            pll x=arr[i];
            ll y=0;
            for (int j=0;j<up.size();j++){
                if (x==up[j])
                    y=1;
            }
            if (y){
                for (int j=0;j<chk.size();j++){
                    if (x==chk[j].first)
                        chk[j].second=hi;
                }
            }
            else
                a.push_back(x);
        }
        arr=a;
        up.clear();
        down.clear();
    }
    for (int i=0;i<chk.size();i++)
        cout << chk[i].second << " ";
    return 0;
}