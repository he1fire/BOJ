#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N;
void f(ll x){
    if (x>1)
        f(x/2);
    if (x%2)
        cout << "1";
    else
        cout << "0";
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    f(N);
    return 0;
}