#include <iostream>
using namespace std;
int main () {
    int A, B, C;
    cin >> A >> B >> C;
    if (A<B && A<C)
        {
        if (B<C)
        cout << A << " " << B << " " << C;
        else
        cout << A << " " << C << " " << B;
        }
    else if (B<A && B<C)
        {
        if (C<A)
        cout << B << " " << C << " " << A;
        else
        cout << B << " " << A << " " << C;
        }
    else
        {
        if (A<B)
        cout << C << " " << A << " " << B;
        else
        cout << C << " " << B << " " << A;
        }
    return 0;
    }