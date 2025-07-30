#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    while (N--){
        ll a, b, c;
        cin >> a >> b >> c;
        cout << min({a*a+(b+c)*(b+c), b*b+(c+a)*(c+a),c*c+(a+b)*(a+b)}) << "\n";
    }
    return 0;
}