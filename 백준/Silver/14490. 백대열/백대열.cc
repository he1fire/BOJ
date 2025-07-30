#include <iostream>
using namespace std;
int main () {
    int A, a, B, b, M;
    char N;
    cin >> A >> N >> B;
    a=A;
    b=B; 
    while (1)
        {
        if (A>B)
            {
            A%=B;
            if (A==0)
                {
                M=B;
                break;
                }
            }
        if (B>A)
            {
            B%=A;
            if (B==0)
                {
                M=A;
                break;
                }
            }
        else 
            {
            M=A;
            break;
            }
        }
    cout << a/M << N << b/M;
    return 0;
    }