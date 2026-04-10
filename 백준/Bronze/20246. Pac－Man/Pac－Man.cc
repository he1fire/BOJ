#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll x, y;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> x >> y;
    while (x)
        cout << x-- << " " << y << "\n";
    while (y)
        cout << x << " " << y-- << "\n";
    for (ll i=0;i<10;i++){
        for (ll j=0;j<10;j++){
            if (i%2)
                cout << i << " " << 9-j << "\n";
            else
                cout << i << " " << j << "\n";
        }
    }
}