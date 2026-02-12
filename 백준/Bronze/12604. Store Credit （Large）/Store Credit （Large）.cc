#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll T, N, M;
map<ll,ll> m;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> T;
    for (ll i=1;i<=T;i++){
        cin >> N >> M;
        m.clear();
        for (ll j=1, a;j<=M;j++){
            cin >> a;
            if (m.find(N-a)!=m.end())
                cout << "Case #" << i << ": " << m[N-a] << " " << j << "\n";
            else
                m[a]=j;
        }
    }
    return 0;
}