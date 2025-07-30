#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll x[2], y[2], chk=1;
ll arr[2005][2005];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    for (int i=1;i>=0;i--){
        ll a, b, c, d;
        cin >> a >> b >> c >> d;
        if (a>c)
            swap(a,c);
        if (b>d)
            swap(b,d);
        for (int j=a;j<c;j++){
            for (int k=b;k<d;k++){
                arr[j+1000][k+1000]=i;
            }
        }
    }
    x[0]=y[0]=-1;
    x[1]=y[1]=2005;
    for (ll i=0;i<=2000;i++){
        for (ll j=0;j<=2000;j++){
            if (arr[i][j]){
                chk=0;
                x[0]=max(x[0],i);
                x[1]=min(x[1],i);
                y[0]=max(y[0],j);
                y[1]=min(y[1],j);
            }
        }
    }
    if (chk)
        cout << "0";
    else
        cout << (x[0]-x[1]+1)*(y[0]-y[1]+1);
    return 0;
}