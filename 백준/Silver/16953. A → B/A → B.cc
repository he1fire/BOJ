#include <bits/stdc++.h>
#define ll long long
using namespace std;
typedef pair<ll,ll> pll;
ll N, M;
ll BFS(){
    ll ret=-1;
    queue<pll> q;
    q.push({M,1});
    while(!q.empty()){
        pll x=q.front();
        q.pop();
        if (x.first==N){
            ret=x.second;
            break;
        }
        if (x.first!=0 && x.first%10==1)
            q.push({x.first/10,x.second+1});
        if (x.first!=0 && x.first%2==0)
            q.push({x.first/2,x.second+1});
    }
    return ret;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M;
    cout << BFS();
    return 0;
}