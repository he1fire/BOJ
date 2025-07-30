#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N;
ll f(ll x){
    while (x){
        if (x%10!=4 && x%10!=7)
            return 0;
        x/=10;
    }
    return 1;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for (int i=N;i>0;i--){
        if (f(i)){
            cout << i;
            break;
        }
    }
    return 0;
}