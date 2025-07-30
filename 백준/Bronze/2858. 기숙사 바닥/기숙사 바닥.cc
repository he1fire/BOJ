#include <iostream>
#include <algorithm>
#define ll long long
using namespace std;
int main () {
    ll a, b, x=0, y=0, cnt=0;
    cin >> a >> b;
    for (ll i=1;i<=10000;i++){
        for (ll j=1;j<=10000;j++){
            if (i*j==a+b && (i-2)*(j-2)==b){
                x=i;
                y=j;
                if (x<y)
                    swap(x,y);
                cnt=1;
                break;
            }
        }
        if (cnt)
            break;
    }
    cout << x << " " << y;
    return 0;
}