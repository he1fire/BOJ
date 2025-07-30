#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, a, b;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> a >> b;
    if (a<b)
        cout << "Bus";
    else if (a>b)
        cout << "Subway";
    else
        cout << "Anything";
    return 0;
}
