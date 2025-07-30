#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll r1, r2, c1, c2, mx, bl;
ll f(ll x, ll y){
    ll ret=0, chk=max(abs(x),abs(y));
    ret=(chk*2+1)*(chk*2+1);
    if (x==chk)
        ret+=y-chk;
    else if (-x==chk)
        ret-=y+chk*5;
    else if (y==chk)
        ret-=x+chk*7;
    else
        ret+=x-chk*3;
    return ret;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> r1 >> c1 >> r2 >> c2;
    for (int i=r1;i<=r2;i++){
        for (int j=c1;j<=c2;j++)
            mx=max(mx,f(i,j));
    }
    for (;mx;bl++,mx/=10);
    for (int i=r1;i<=r2;i++){
        for (int j=c1;j<=c2;j++){
            if (j!=c1)
                cout << " ";
            cout << setw(bl) << f(i,j);
        }
        if (i!=r2)
            cout << "\n";
    }
}