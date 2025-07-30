#include <iostream>
using namespace std;
int main () {
    int A, B, C, i, j, k;
    cin >> A >> B >> C >> i;
    C+=i;
    j=C/60;
    C=C%60;
    B+=j;
    k=B/60;
    B=B%60;
    A+=k;
    A=A%24;
    cout << A << " " << B << " " << C;
    return 0;
    }