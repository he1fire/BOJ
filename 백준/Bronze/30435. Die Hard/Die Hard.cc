#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll arr[3][6];
ll f(ll x, ll y){
    ll a=0, b=0;
    for (ll i=0;i<6;i++){
        for (ll j=0;j<6;j++){
            if (arr[x][i]>arr[y][j])
                a++;
            if (arr[x][i]!=arr[y][j])
                b++;
        }
    }
    return a!=0 && a*2>=b;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    for (ll i=0;i<3;i++){
        for (ll j=0;j<6;j++)
            cin >> arr[i][j];
    }
    for (ll i=0;i<3;i++){
        if (f(i,(i+1)%3) && f(i,(i+2)%3)){
            cout << i+1;
            return 0;
        }
    }
    cout << "No dice";
    return 0;
}