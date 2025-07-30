#include <iostream>
using namespace std;
int main () {
    int N, M=1;
    cin >> N;
    while (N!=1)
        {
        if (N%2==1)
            {
            N--;
            M++;
            }
        else
        N/=2;
        }
    cout << M;
    return 0;
    }