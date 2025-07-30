#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, x, y=1005;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    while (N--){
        ll a, b;
        cin >> a >> b;
        if (b<y)
            x=a, y=b;
    }
    cout << x << " " << y;
    return 0;
}