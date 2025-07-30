#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    while (N--){
        ll a, chk=1;
        cin >> a;
        while (a>chk){
            chk*=10;
        }
        if (a==1 || (a*a)%chk==a)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}