#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, M, u, r, x, ans;
string S;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> S >> M;
    for (auto c:S){
        if (c=='U')
            u++;
        else if (c=='R')
            r++;
        else
            x++;
    }
    while (M--){
        ll a, b;
        cin >> a >> b;
        a--, b--;
        ll tmp=min({a,b,x});
        a-=tmp, b-=tmp;
        if (r>=a && u>=b)
            ans++;
    }
    cout << ans;
    return 0;
}