#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll N;
    cin >> N;
    while (N--){
        ll M, cnt=0;
        cin >> M;
        for (int i=0;i<M;i++){
            ll a;
            cin >> a;
            cnt+=a%M;
        }
        if (cnt%M)
            cout << "NO\n";
        else
            cout << "YES\n";
    }
    return 0;
}