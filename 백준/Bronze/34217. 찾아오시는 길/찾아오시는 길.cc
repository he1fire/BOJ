#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll a, b, c, d;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> a >> b >> c >> d;
    if (a+c>b+d)
        cout << "Yongdap";
    else if (a+c<b+d)
        cout << "Hanyang Univ.";
    else
        cout << "Either";
    return 0;
}