#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, M;
set<ll> s;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M;
    while (M--){
        ll a, chk=0;
        cin >> a;
        for (ll x=a;x>0;x/=2){
            if (s.find(x)!=s.end())
                chk=x;
        }
        cout << chk << "\n";
        if (!chk)
            s.insert(a);
    }
    return 0;
}