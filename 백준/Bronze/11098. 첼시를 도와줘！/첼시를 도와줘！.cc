#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll T;
    cin >> T;
    while (T--){
        ll N, mx=-1;
        string name;
        cin >> N;
        while (N--){
            ll a;
            string b;
            cin >> a >> b;
            if (a>mx){
                mx=a;
                name=b;
            }
        }
        cout << name << "\n";
    }
    return 0;
}