#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, x, y;
vector<ll> v[2];
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for (ll i=0;i<2;i++){
        for (ll j=0, a;j<N;j++){
            cin >> a;
            v[i].push_back(a);
        }
    }
    for (ll i=0;i<N;i++){
        for (ll j=0;j<N;j++){
            if (v[0][i]>=v[1][j])
                x++;
            if (v[0][i]<=v[1][j])
                y++;
        }
    }
    if (x>y)
        cout << "first";
    else if (x<y)
        cout << "second";
    else
        cout << "tie";
    return 0;
}