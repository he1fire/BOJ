#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll x1, x2, y1, y2, r1, r2;
    cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
    if (pow(abs(x1-x2),2)+pow(abs(y1-y2),2)<pow(r1+r2,2))
        cout << "YES";
    else
        cout << "NO";
    return 0;
}