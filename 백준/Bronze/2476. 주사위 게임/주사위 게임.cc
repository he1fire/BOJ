#include <iostream>
using namespace std;
int main () {
    int A, B, C, K, N=0, M=0;
    cin >> K;
    for (int i=1;i<=K;i++)
        {
        cin >> A >> B >> C;
        if (A==B && B==C && A==C)
        N=10000+A*1000;
        else if (A==B)
        N=1000+A*100;
        else if (B==C)
        N=1000+B*100;
        else if (C==A)
        N=1000+C*100;
        else
            {
            if (A>B && A>C)
            N=A*100;
            else if (B>A && B>C)
            N=B*100;
            else
            N=C*100;
            }
        if (M<N)
        M=N;
        }
    cout << M;
    return 0;
    }