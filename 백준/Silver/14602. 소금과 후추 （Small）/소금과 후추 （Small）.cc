#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, M, K, W, arr[35][35];
ll f(ll x, ll y){
    vector<ll> v;
    for (int i=x;i<x+W;i++){
        for (int j=y;j<y+W;j++)
            v.push_back(arr[i][j]);
    }
    sort(v.begin(),v.end());
    return v[W*W/2];
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M >> K >> W;
    for (int i=0;i<N;i++){
        for (int j=0;j<M;j++)
            cin >> arr[i][j];
    }
    for (int i=0;i<=N-W;i++){
        for (int j=0;j<=M-W;j++)
            cout << f(i,j) << " ";
        cout << "\n";
    }
    return 0;
}