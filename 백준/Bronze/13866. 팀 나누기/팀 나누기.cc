#include <iostream>
using namespace std;
int main () {
    int A, B, C, D;
    cin >> A >> B >> C >> D;
    if (A+D>B+C)
    cout << (A+D)-(B+C);
    else
    cout << (B+C)-(A+D);
    return 0;
    }