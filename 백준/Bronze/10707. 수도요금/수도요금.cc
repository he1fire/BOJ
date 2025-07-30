#include <iostream>
using namespace std;
int main () {
    int A, B, C, D, T, x=0, y=0;
    cin >> A >> B >> C >> D >> T;
    x=A*T;
    if (C>=T)
    y=B;
    else
    y=B+(T-C)*D;
    if (x>y)
    cout << y;
    else
    cout << x; 
    return 0;
    }