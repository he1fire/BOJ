#include <iostream>
using namespace std;
int main () {
    int N, M, x=1;
    cin >> N;
    for (M=1;1;M++)
        {
        if (N<10)
        M=0;
        while (N)
            {
            x*=N%10;
            N/=10;
            }
        if (x<10)
        break;
        N=x;
        x=1;
        }
    cout << M;
    return 0;
    }