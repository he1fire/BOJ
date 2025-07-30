#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll a, b, c;
    while (cin >> a >> b >> c)
        cout << max(b-a,c-b)-1 << "\n";
    return 0;
}