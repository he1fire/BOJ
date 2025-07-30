#include <iostream>
using namespace std;
int main () {
    long long A, B;
    cin >> A >> B;
    if (A>=B)
    cout << (A-B+1)*(A+B)/2;
    else
    cout << (B-A+1)*(A+B)/2;
    return 0;
    }