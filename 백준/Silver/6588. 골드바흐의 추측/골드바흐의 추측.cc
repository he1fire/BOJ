#include <bits/stdc++.h>
#define ll long long
using namespace std;
typedef pair<ll,ll> pll;
ll N, arr[1000005];
pll v[1000005];
void f(){
    arr[0]=arr[1]=1;
    for (ll i=2;i<=1000000;i++){
        if (!arr[i]){
            for (ll j=i*i;j<=1000000;j+=i)
                arr[j]=1;
        }
    }
    for (ll i=6;i<=1000000;i+=2){
        for (ll j=3;j<=i/2;j++){
            if (!arr[j] && !arr[i-j]){
                v[i]={j,i-j};
                break;
            }
        }
    }
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    f();
    while (1){
        cin >> N;
        if (!N)
            break;
        cout << N << " = " << v[N].first << " + " << v[N].second << "\n";
    }
    return 0;
}