#include <iostream>
using namespace std;
int main () {
    int A, B, i, j, k;
    cin >> A >> B;
    i=A/100;
    j=(A/10)%10;
    k=A%10;
    A=i+10*j+100*k;
    i=B/100;
    j=(B/10)%10;
    k=B%10;
    B=i+10*j+100*k;
    if (A>=B)
        {
        cout << A;
        }
    else
        {
        cout << B;
        }
    return 0;
    }