#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for (int i=0;i<N;i++){
        ll x, ans=1;
        cin >> x;
        for (int j=1;j<=x;j++)
            ans=ans*j%10;
        cout << ans << "\n";
    }
    return 0;
}