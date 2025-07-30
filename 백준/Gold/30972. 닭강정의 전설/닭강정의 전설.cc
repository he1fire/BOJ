#include <bits/stdc++.h>
#define ll long long
using namespace std;
struct xy{
    ll x, y;
    xy operator-(const ll n) const {
        return {x-n, y-n};
    }
    xy operator+(const ll n) const {
        return {x+n, y+n};
    }
};
ll N, M, arr[5005][5005];
ll prefix(xy a, xy b){
    return arr[b.x][b.y]-arr[a.x-1][b.y]-arr[b.x][a.y-1]+arr[a.x-1][a.y-1];
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for (int i=1;i<=N;i++){
        for (int j=1;j<=N;j++)
            cin >> arr[i][j];
    }
    for (int i=1;i<=N;i++){
        for (int j=1;j<=N;j++)
            arr[i][j]+=arr[i-1][j]+arr[i][j-1]-arr[i-1][j-1];
    }
    cin >> M;
    while (M--){
        xy a, b;
        cin >> a.x >> a.y >> b.x >> b.y;
        cout << prefix(a+1, b-1)*2-prefix(a, b) << "\n";
    }
    return 0;
}