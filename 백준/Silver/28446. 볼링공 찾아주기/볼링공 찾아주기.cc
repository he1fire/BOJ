#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N;
map<ll,ll> m;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    while (N--){
        ll a, b, c;
        cin >> a;
        if (a==1){
            cin >> b >> c;
            m[c]=b;
        }
        else{
            cin >> b;
            cout << m[b] << "\n";
        }
    }
    return 0;
}