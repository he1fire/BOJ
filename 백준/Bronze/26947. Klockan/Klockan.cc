#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, ans;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for (int i=0;i<=12*60;i++){
        ll a=i/60, b=i%60, now=0;
        a=a*300+b*5;
        b=b*60;
        if (a>b)
            now=3600-a+b;
        else
            now=b-a;
        if (now==N){
            ans=i;
            break;
        }
    }
    if (ans/60>=10)
        cout << ans/60 << ":";
    else
        cout << "0" << ans/60 << ":";
    if (ans%60>=10)
        cout << ans%60;
    else
        cout << "0" << ans%60;
    return 0;
}