#include <bits/stdc++.h>
#define ll long long
#define INF 1e9+7
#define MOD (ll)(1e9+7)
using namespace std;
typedef pair<ll,ll> pll;
ll N, M, ans;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for (int i=0;i<N;i++){
        ll a;
        cin >> a;
        ans+=a;
    }
    if (ans==0)
        cout << "Stay";
    else if (ans<0)
        cout << "Left";
    else
        cout << "Right";
    return 0;
}