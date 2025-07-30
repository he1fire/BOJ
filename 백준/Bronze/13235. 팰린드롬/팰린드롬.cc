#include <bits/stdc++.h>
#define ll long long
using namespace std;
string a, b;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> a;
    b=a;
    reverse(a.begin(),a.end());
    cout << (a==b ? "true" : "false");
    return 0;
}