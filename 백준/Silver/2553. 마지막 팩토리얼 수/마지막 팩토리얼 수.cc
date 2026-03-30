#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, arr[20005];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    arr[1]=1;
    for (ll i=2;i<=N;i++){
        ll x=arr[i-1]*i;
        while (x%10==0)
            x/=10;
        arr[i]=x%1000000;
    }
    cout << arr[N]%10;
}