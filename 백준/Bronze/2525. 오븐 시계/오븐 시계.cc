#include <iostream>
using namespace std;
int main () {
    int A, B, i, j;
    cin >> A >> B >> i;
    B+=i;
    j=B/60;
    B=B%60;
    A+=j;
    A=A%24;
    cout << A << " " << B;
    return 0;
    }