#include <bits/stdc++.h>
#define ll long long
using namespace std;
struct xy{
    ll x,y,val;
};
ll N, arr[4][3]={{1,2,3},{4,5,6},{7,8,9},{-1,0,-1}};
vector<ll> v;
void f(){
    queue<xy> q;
    for (ll i=0;i<3;i++){
        for (ll j=0;j<3;j++){
            q.push({i,j,arr[i][j]});
            v.push_back(arr[i][j]);
        }
    }
    while (!q.empty()){
        xy now=q.front();
        q.pop();
        for (ll i=0;i<4;i++){
            for (ll j=0;j<4;j++){
                ll dx=now.x+i, dy=now.y+j;
                if (dx<0 || 3<dx || dy<0 || 2<dy || arr[dx][dy]==-1 || now.val*10+arr[dx][dy]>10000)
                    continue;
                q.push({dx,dy,now.val*10+arr[dx][dy]});
                v.push_back(now.val*10+arr[dx][dy]);
            }
        }
    }
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    f();
    sort(v.begin(),v.end());
    while (N--){
        ll a, ans, mn=99999;
        cin >> a;
        for (auto x:v){
            ll tmp=abs(a-x);
            if (tmp<mn){
                mn=tmp;
                ans=x;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}