#include <iostream>
using namespace std;
int main () {
    int A, B, C, M, N=0;
    cin >> A >> B >> C;
    M=A+B;
    while (M/C!=0)
        {
        N+=M/C;
        M=M/C+M%C;
        }
    cout << N;
    return 0;
    }