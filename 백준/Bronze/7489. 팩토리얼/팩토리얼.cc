#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, arr[1005];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    arr[1]=1;
    for (int i=2;i<1005;i++){
        ll x=arr[i-1]*i;
        while (x%10==0)
            x/=10;
        arr[i]=x%100000000;
    }
    cin >> N;
    for (int i=0;i<N;i++){
        ll a;
        cin >> a;
        cout << arr[a]%10 << "\n";
    }
    return 0;
}