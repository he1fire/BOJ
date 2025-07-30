#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, x, y;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    while (N--){
        ll a;
        cin >> a;
        x+=(a/30+1)*10;
        y+=(a/60+1)*15;
    }
    if (x<y)
        cout << "Y " << x;
    else if (y<x)
        cout << "M " << y;
    else
        cout << "Y M " << x;  
    return 0;
}