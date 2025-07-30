#include <iostream>
using namespace std;
int main () {
    int N, M, A, B, C=0;
    cin >> N;
    M=N;
    while(1)
        {
        C++;
        A=N/10;
        B=N%10;
        N=A+B;
        if (N<10)
        N=N+B*10;
        else
        N=N%10+B*10;
        if (N==M)
        break;
        }
    cout << C;
    return 0;
    }