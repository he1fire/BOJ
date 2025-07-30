#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll N;
    cin >> N;
    for (ll i=0;i<N;i++){
        double a;
        string b;
        cin >> a >> b;
        if (b=="kg")
            printf("%.4f lb\n", a*2.2046);
        if (b=="lb")
            printf("%.4f kg\n", a*0.4536);
        if (b=="l")
            printf("%.4f g\n", a*0.2642);
        if (b=="g")
            printf("%.4f l\n", a*3.7854);
    }
    return 0;
}