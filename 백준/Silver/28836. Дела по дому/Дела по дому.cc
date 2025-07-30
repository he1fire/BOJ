#include <bits/stdc++.h>
#define ll long long
using namespace std;
double a, b, c, v1, v2, v3, ans;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> a >> b >> c >> v1 >> v2 >> v3;
    if (a+b<c)
        c=a+b;
    if (a+c<b)
        b=a+c;
    if (c+b<a)
        a=c+b;
    ans=min({a/v1+a/v2+b/v1+b/v2, a/v1+c/v2+b/v3, b/v1+c/v2+a/v3});
    cout << ans;
    return 0;
}