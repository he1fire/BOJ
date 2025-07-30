#include <bits/stdc++.h>
#define ll long long
using namespace std;
struct xy{ll x, y;};
vector<xy> v;
ll N, ans, mx;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    while (N--){
        ll a, b;
        cin >> a >> b;
        v.push_back({a,b});
    }
    for (auto i:v){
        ll x=i.x, cnt=0;
        for (auto j:v){
            if (j.x>=x && x-j.y>0)
                cnt+=x-j.y;
        }
        if (cnt>mx){
            mx=cnt;
            ans=x;
        }
        else if (cnt==mx)
            ans=min(ans,x);
    }
    cout << ans;
    return 0;
}