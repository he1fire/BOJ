#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll a, b, c, d;
int main(){
    cin >> a >> b >> c >> d;
    for (int i=1;i<b;i*=10, a*=10);
    for (int i=1;i<d;i*=10, c*=10);
    cout << a+b+c+d;
    return 0;
}