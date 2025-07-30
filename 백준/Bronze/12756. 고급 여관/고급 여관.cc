#include <iostream>
using namespace std;
int main () {
    int A, B, C, D;
    cin >> A >> B >> C >> D;
    while(B>0 && D>0)
        {
        B-=C;
        D-=A;
        }
    if (B>0 && D<=0)
    cout << "PLAYER A";
    else if (D>0 && B<=0)
    cout << "PLAYER B";
    else
    cout << "DRAW";
    return 0;
    }