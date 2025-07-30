#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    unsigned long long N;
    ll ans=64;
    cin >> N;
    while (N%2==0){
        ans--;
        N/=2;
    }
    cout << ans;
    return 0;
}