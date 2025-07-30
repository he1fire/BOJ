#include <iostream>
using namespace std;
int main () {
    int A, B, i;
    cin >> A >> B;
    B-=45;
    if (B<0)
        {
        B+=60;
        A-=1;
        if (A<0)
            {
            A+=24;
            }
        }
    cout << A << " " << B;
    return 0;
    }