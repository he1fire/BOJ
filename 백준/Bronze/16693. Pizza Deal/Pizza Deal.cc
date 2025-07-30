#include <bits/stdc++.h>
#define ll long long
#define _USE_MATH_DEFINES
using namespace std;
double a, b, c, d;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> a >> b >> c >> d;
    cout << ((a/b)<(c*c*M_PI/d) ? "Whole pizza" : "Slice of pizza");
    return 0;
}