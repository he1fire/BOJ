#include <iostream>
using namespace std;
int main () {
    int A=1, B=0, N;
    cin >> N;
    for (int i=1;i<=N;i++)
        {
        B+=A;
        A=B-A;
        }
    cout << A << " " << B;
    return 0;
    }