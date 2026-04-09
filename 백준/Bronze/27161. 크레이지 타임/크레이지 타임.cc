#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, now=1, chk=1;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    while (N--){
        ll x;
        string s;
        cin >> s >> x;
        if (s=="HOURGLASS" && x==now)
            cout << now << " NO\n";
        else if (x==now)
            cout << now << " YES\n";
        else if (s=="HOURGLASS"){
            chk*=-1;
            cout << now << " NO\n";
        }
        else
            cout << now << " NO\n";
        now+=chk;
        if (now<0 || now>12)
            now=(now+12)%12;
        if (now==0)
            now=12;
    }
    return 0;
}