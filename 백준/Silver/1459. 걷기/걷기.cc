#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll X, Y, W, S;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> X >> Y >> W >> S;
    if (X<Y)
        swap(X,Y);
    if (W*2<=S)
        cout << (X+Y)*W;
    else if (W<=S)
        cout << Y*S+(X-Y)*W;
    else
        cout << Y*S+((X-Y)%2 ? (X-Y-1)*S+W : (X-Y)*S);
    return 0;
}