#include <iostream>
using namespace std;
int main () {
    int A, B, C, D, K, N=0, M=0;
    cin >> K;
    for (int i=1;i<=K;i++)
        {
        cin >> A >> B >> C >> D;
        if (A==B && B==C && C==D)
        N=50000+A*5000;
        else if (A==B && B==C)
        N=10000+A*1000;
        else if (A==C && C==D)
        N=10000+C*1000;
        else if (A==B && B==D)
        N=10000+B*1000;
        else if (B==C && C==D)
        N=10000+D*1000;
        else if (A==B && C==D)
        N=2000+A*500+D*500;
        else if (A==C && B==D)
        N=2000+A*500+B*500;
        else if (A==D && B==C)
        N=2000+A*500+C*500;
        else if (A==B)
        N=1000+A*100;
        else if (A==C)
        N=1000+A*100;
        else if (A==D)
        N=1000+A*100;
        else if (B==C)
        N=1000+B*100;
        else if (B==D)
        N=1000+B*100;
        else if (C==D)
        N=1000+C*100;
        else
            {
            if (A>B && A>C && A>D)
            N=A*100;
            else if (B>A && B>C && B>D)
            N=B*100;
            else if (C>A && C>B && B>D)
            N=C*100;
            else
            N=D*100;
            }
        if (M<N)
        M=N;
        }
    cout << M;
    return 0;
    }