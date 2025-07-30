#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    while (1){
        ll a, b, c, d;
        cin >> a >> b >> c >> d;
        if (a==0 && b==0 && c==0 && d==0)
            break;
        cout << c-b << " " << d-a << "\n";
    }
    return 0;
}