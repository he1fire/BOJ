#include <iostream>
using namespace std;
int main () {
    int A, B, N, M;
    cin >> A >> B;
    if (A>B)
    N=B;
    else
    N=A;
    for (int i=N;i>=1;i--)
        {
        if (A%i==0 && B%i==0)
            {
            M=i;
            break;
            }
        }
    cout << M << "\n" << M*(A/M)*(B/M);
    return 0;
    }