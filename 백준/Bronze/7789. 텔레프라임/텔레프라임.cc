#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, M;
ll f (ll x){
    for (int i=2;i*i<=x;i++){
        if (x%i==0)
            return 0;
    }
    return 1;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); 
    cin >> N >> M;
    if (f(N) && f(N+M*1000000))
        cout << "Yes";
    else
        cout << "No";
    return 0;
}