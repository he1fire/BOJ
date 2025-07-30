#include <iostream>
using namespace std;
int f(int a, int b) {
    return a? f(b%a,a) : b;
    }
int main () {
    int A, B, N;
    cin >> A >> B;
    N=f(A,B);
    for (int i=1;i*i<=N;i++)
    if (N%i==0)
        {
        cout << i << " " << A/i << " " << B/i << "\n";
        if (i*i!=N)
        cout << N/i << " " << A/(N/i) << " " << B/(N/i) << "\n";
        }
    return 0;
    }