#include <iostream>
using namespace std;
int main () {
    int N, M;
    cin >> N;
    if (N==1)
    N=2;
    while (1)
        {
        if (N%2==1)
            {
            M=0;
            break;
            }
        else if (N/2==1)
            {
            M=1;
            break;
            }
        else
        N/=2;
        }
    cout << M;
    return 0;
    }