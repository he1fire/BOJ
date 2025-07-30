#include <bits/stdc++.h>
#define ll long long
#define INF 1e9+7
#define MOD (ll)(1e9+7)
using namespace std;
typedef pair<ll,ll> pll;
ll N, M, ans, a, b;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> a >> b;
    for (int i=0;i<a/2;i++){
        cout << b-(a/2-i) << " ";
    }
    if (a%2)
        cout << b << " ";
    for (int i=0;i<a/2;i++){
        cout << b+i+1 << " ";
    }
    return 0;
}