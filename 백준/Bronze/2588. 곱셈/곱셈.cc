#include <iostream>
using namespace std;
int main () {
    int A, B, i, j, k;
    cin >> A >> B;
    i=B%10;
    j=(B/10)%10;
    k=B/100;
    cout << i*A << endl;
    cout << j*A << endl;
    cout << k*A << endl;
    cout << B*A;
    return 0;
    }