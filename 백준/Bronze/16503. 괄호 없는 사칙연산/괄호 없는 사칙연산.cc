#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll cal(ll x, ll y, char oper){
    if (oper=='+')
        return x+y;
    else if (oper=='-')
        return x-y;
    else if (oper=='*')
        return x*y;
    else
        return x/y;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll a, b, c, ans1, ans2;
    char oper1, oper2;
    cin >> a >> oper1 >> b >> oper2 >> c;
    ans1=cal(cal(a,b,oper1),c,oper2);
    ans2=cal(a,cal(b,c,oper2),oper1);
    if (ans1<ans2)
        cout << ans1 << "\n" << ans2;
    else
        cout << ans2 << "\n" << ans1;
    return 0;
}
