#include <iostream>
#include <algorithm>
using namespace std;
int ch (int a) {
    if (a<0)
    return -a;
    else
    return a;
    }
int main () {
    int Bx, By, Dx, Dy, Jx, Jy;
    int Dt=0, Bt=0, Btx=0, Bty=0;
    cin >> Bx >> By >> Dx >> Dy >> Jx >> Jy;
    Dt=ch(Dx-Jx)+ch(Dy-Jy);
    Btx=ch(Bx-Jx);
    Bty=ch(By-Jy);
    Bt=min(Btx,Bty)+ch(Btx-Bty);
    if (Bt>Dt)
    cout << "daisy";
    else if (Dt>Bt)
    cout << "bessie";
    else
    cout << "tie";
    return 0;
    }