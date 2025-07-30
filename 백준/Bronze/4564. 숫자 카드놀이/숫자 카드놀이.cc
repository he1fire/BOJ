#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    while (1){
        ll a;
        cin >> a;
        if (a==0)
            break;
        while (a>9){
            cout << a << " ";
            ll b=1;
            while (a){
                b*=a%10;
                a/=10;
            }
            a=b;
        }
        cout << a << "\n";
    }
    return 0;
}