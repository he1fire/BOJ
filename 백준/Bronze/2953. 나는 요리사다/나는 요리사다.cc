#include <iostream>
using namespace std;
int main () {
    int N=0, M=0;
    for (int i=1;i<=5;i++)
        {
        int A, B, C, D;
        cin >> A >> B >> C >> D;
        if (M<A+B+C+D)
            {
            N=i;
            M=A+B+C+D;
            }
        }
    cout << N << " " << M;
    return 0;
    }