#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, M, now, chk;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M;
    for (int i=0;i<M;i++){
        ll a, b, c;
        cin >> a >> b >> c;
        now-=a;
        if (now<0)
            chk=1;
        now+=b;
        if (now>N)
            chk=1;
        if (c>0 && now!=N)
            chk=1;
    }
    if (now!=0)
        chk=1;
    cout << (chk ? "impossible" : "possible");
    return 0;
}