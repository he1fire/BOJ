#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for (ll i=1;i<=N;i++){
        string a, b;
        ll x=0, y=0, cnt=0;
        cin >> a >> b;
        while (y<b.size()){
            if (a[x]==b[y])
                x++, y++;
            else
                cnt++, y++;
        }
        cout << "Case #" << i << ": ";
        if (x<a.size())
            cout << "IMPOSSIBLE\n";
        else
            cout << cnt << "\n";
    }
    return 0;
}