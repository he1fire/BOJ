#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll ans;
char arr[4]={'N','E','S','W'};
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    for (int i=0;i<10;i++){
        ll a;
        cin >> a;
        if (a==1)
            ans++;
        else if (a==3)
            ans--;
        else
            ans+=2;
        ans=(ans+4)%4;
    }
    cout << arr[ans];
    return 0;
}