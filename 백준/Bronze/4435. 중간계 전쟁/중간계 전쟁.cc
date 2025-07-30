#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, x[6]={1,2,3,3,4,10}, y[7]={1,2,2,2,3,5,10};
double cnt;
int main(){
    cin >> N;
    for (int j=1;j<=N;j++){
        ll xx=0, yy=0;
        for (int i=0;i<6;i++){
            ll a;
            cin >> a;
            xx+=a*x[i];
        }
        for (int i=0;i<7;i++){
            ll a;
            cin >> a;
            yy+=a*y[i];
        }
        cout << "Battle " << j << ": ";
        if (xx>yy)
            cout << "Good triumphs over Evil\n";
        else if (yy>xx)
            cout << "Evil eradicates all trace of Good\n";
        else
            cout << "No victor on this battle field\n";
    }
    return 0;
}