#include <iostream>
using namespace std;
int main () {
    int A, B, C;
    cin >> A >> B >> C;
    while (C)
        {
        A>=B ? B++ : A++;
        C--;
        }
    A>=B ? cout << 2*B : cout << 2*A;
    return 0;
    }