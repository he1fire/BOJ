#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll N;
    cin >> N;
    for (int i=1;i<=N;i++){
        ll a, b, c;
        cin >> a >> b >> c;
        cout << "Scenario #" << i << ":\n";
        if (pow(max({a,b,c}),2)==min({a*a+b*b,b*b+c*c,c*c+a*a}))
            cout << "yes\n\n";
        else
            cout << "no\n\n";
    }
    return 0;
}