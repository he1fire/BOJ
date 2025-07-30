#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll f(ll a,ll b){
    return a ? f(b%a,a) : b;  
}
int main () {
    ll N;
    cin >> N;
    for (int i=0;i<N;i++){
        ll a, b;
        cin >> a >> b;
        cout << a/f(a,b)*b << "\n";
    }
    return 0;
}