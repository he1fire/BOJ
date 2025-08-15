#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    while (N--){
        string a, b;
        ll ans=0;
        cin >> a >> b;
        for (int i=0;i<a.size();i++){
            ll cnt=0;
            for (int j=0;j<b.size();j++){
                if (i+j>=a.size())
                    break;
                if (a[i+j]==b[j])
                    cnt++;
                else
                    break;
            }
            if (cnt==b.size())
                i+=cnt-1;
            ans++;
        }
        cout << ans << "\n";
    }
    return 0;
}