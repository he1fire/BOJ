#include <iostream>
using namespace std;
int main () {
    int x, y, w, h, A, B;
    cin >> x >> y >> w >> h;
    if (w-x>=x)
    A=x;
    else
    A=w-x;
    if (h-y>=y)
    B=y;
    else
    B=h-y;
    if (A>=B)
    cout << B;
    else
    cout << A;
    return 0;
    }