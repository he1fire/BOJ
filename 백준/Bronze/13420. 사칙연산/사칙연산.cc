#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll T;
int main(){
    cin >> T;
    while (T--){
        ll x, y, z, chk=0;
        char a, b;
        cin >> x >> a >> y >> b >> z;
        if ((a=='+' && x+y==z) || (a=='-' && x-y==z) || (a=='*' && x*y==z) || (a=='/' && x/y==z))
            chk=1;
        cout << (chk ? "correct\n" : "wrong answer\n");
    }
    return 0;
}