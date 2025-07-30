#include <iostream>
using namespace std;
int main () {
    int N, A=0, B=0, C=0;
    cin >> N;
    A=N/300;
    N%=300;
    B=N/60;
    N%=60;
    C=N/10;
    N%=10;
    if (N!=0)
    cout << "-1";
    else
    cout << A << " " << B << " " << C;
    return 0;
    }