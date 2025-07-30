#include <iostream>
using namespace std;
int f(int a, int b) {
    return a ? f(b%a,a) : b;
    }
int main () {
    int A, B, N;
    cin >> A >> B;
    N=f(A,B);
    for (int j=1;j<=N;j++)
    if (N%j==0)
    cout << j << " " << A/j << " " << B/j << "\n";
    return 0;
    }