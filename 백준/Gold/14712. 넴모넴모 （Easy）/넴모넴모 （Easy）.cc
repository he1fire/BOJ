#include <bits/stdc++.h>
#define ll long long
#define INF 1e9
using namespace std;
ll N, M, arr[30][30];
ll f(ll x, ll y){
    ll ret=0, dx=x, dy=y+1;
    if (x>N)
        return 1;
    if (dy>M){
        dx++;
        dy=1;
    }
    ret+=f(dx,dy);
    if (arr[x-1][y-1]==0 || arr[x-1][y]==0 || arr[x][y-1]==0){
        arr[x][y]=1;
        ret+=f(dx,dy);
        arr[x][y]=0;
    }
    return ret;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M;
    cout << f(1,1);
    return 0;
}