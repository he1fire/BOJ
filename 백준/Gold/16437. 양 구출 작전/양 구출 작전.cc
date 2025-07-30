#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, M, ans, arr[123500];
vector<ll> v[123500];
ll DFS(ll x){
    ll cnt=0;
    for (ll i=0;i<v[x].size();i++)
        cnt+=DFS(v[x][i]);
    cnt+=arr[x];
    if (cnt<0)
        cnt=0;
    return cnt;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for (ll i=2;i<=N;i++){
        char a;
        ll b, c;
        cin >> a >> b >> c;
        if (a=='S')
            arr[i]=b;
        else
            arr[i]=-b;
        v[c].push_back(i);
    }
    cout << DFS(1);
    return 0;
}
