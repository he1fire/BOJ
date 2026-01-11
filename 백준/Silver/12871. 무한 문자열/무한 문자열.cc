#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll cnt;
string a, b, x, y;
ll gcd(ll a, ll b){
    return a ? gcd(b%a,a) : b;
}
ll lcm(ll a, ll b){
    return a/gcd(a,b)*b;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> a >> b;
    cnt=lcm(a.size(),b.size());
    while (x.size()<cnt)
        x+=a;
    while (y.size()<cnt)
        y+=b;
    cout << (x==y ? 1 : 0);
    return 0;
}