#include <iostream>
using namespace std;
int main () {
    long long A, a, B, b, N, M;
    cin >> N;
    for (int i=1;i<=N;i++)
        {
        cin >> A >> B;
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
        cout << M*(a/M)*(b/M) << "\n";
        }
    return 0;
    }