#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll x, y, z;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> x >> y >> z;
    if (x==3 && y==3 && z==3)
        cout << "0";
    else
        cout << (min({x,y,z})-1)/2;
    return 0;
}