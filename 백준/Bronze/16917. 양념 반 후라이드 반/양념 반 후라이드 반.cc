#include <iostream>
#include <algorithm>
using namespace std;
int main () {
    int A, B, C, X, Y, ans=0;
    cin >> A >> B >> C >> X >> Y;
    if (C*2>A+B)
    ans=(A*X)+(B*Y);
    else {
        if (X<Y)
        ans=(X*C*2)+((Y-X)*min(B,C*2));
        else
        ans=(Y*C*2)+((X-Y)*min(A,C*2));
    }
    cout << ans;   
    return 0;
    }