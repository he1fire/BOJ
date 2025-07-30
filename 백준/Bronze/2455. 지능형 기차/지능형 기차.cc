#include <iostream>
using namespace std;
int main () {
    int N=0, M=0;
    for (int i=1;i<=4;i++)
        {
        int A,B;
        cin >> A >> B;
        N+=B-A;
        if (M<N)
        M=N;
        }
    cout << M;
    return 0;
    }