#include <bits/stdc++.h>
#define ll long long
#define pll pair<ll,ll>
using namespace std;
ll N, arr[4]={108, 508, 212, 305};
set<pll> s;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for (int i=0;i<=200;i++){
        for (int j=0;j<=200;j++){
            for (int k=0;k<4;k++){
                ll x=(i*arr[k/2]+j*arr[k%2+2])*4763;
                if (x==N)
                    s.insert({i,j});
            }
        }
    }
    cout << s.size() << "\n";
    for (auto x:s)
        cout << x.first << " " << x.second << "\n";
    return 0;
}