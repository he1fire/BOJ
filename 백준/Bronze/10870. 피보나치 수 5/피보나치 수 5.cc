#include <iostream>
using namespace std;
int main () {
    int N, A=0, B=1, C=0;
    cin >> N;
    for (int i=1;i<=N;i++)
        {
        A=B;
        B=C;
        C=A+B;
        }
    cout << C;
    return 0;
    }