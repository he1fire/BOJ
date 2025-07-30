#include <iostream>
using namespace std;
int main () {
    long long A, B, N;
    cin >> A >> B;
    while (1)
        {
        if (A>B)
            {
            A%=B;
            if (A==0)
                {
                N=B;
                break;
                }
            }
        if (B>A)
            {
            B%=A;
            if (B==0)
                {
                N=A;
                break;
                }
            }
        else 
            {
            N=A;
            break;
            }
        }
    for (int i=1;i<=N;i++)
    cout << "1";
    return 0;
    }