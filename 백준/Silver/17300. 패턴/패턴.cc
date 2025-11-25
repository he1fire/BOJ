#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, visited[5][5];
vector<ll> v;
string f(){
    ll x=v[0]/3, y=v[0]%3;
    visited[x][y]=1;
    for (ll i=1;i<v.size();i++){
        ll dx=v[i]/3, dy=v[i]%3;
        if (visited[dx][dy])
            return "NO";
        if (abs(x-dx)%2==0 && abs(y-dy)%2==0 && !visited[(x+dx)/2][(y+dy)/2])
            return "NO";
        visited[dx][dy]=1;
        x=dx, y=dy;
    }
    return "YES";
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for (ll i=0,a;i<N;i++){
        cin >> a;
        v.push_back(a-1);
    }
    cout << f();
    return 0;
}