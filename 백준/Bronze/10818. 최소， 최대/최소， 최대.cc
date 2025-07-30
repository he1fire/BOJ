#include <iostream>
using namespace std;
int main () {
    int N, A=0, B=0;
    cin >> N;
    for (int i=1;i<=N;i++)
        {
        int j;
        cin >> j;
        if (i==1)
            {
            A=j;
            B=j;
            }
        else
            {
            if (j<A)
            A=j;
            if (j>B)
            B=j;
            }
        }
    cout << A << " " << B;
    return 0;
    }