#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for (ll i=0, x;i<N;i++){
        cin >> x;
        cout << x*(x+1)/2 << " " << x*(x+1)-x << " " << x*(x+1) << "\n";
    }
    return 0;
}