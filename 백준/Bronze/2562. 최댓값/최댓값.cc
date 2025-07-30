#include <iostream>
using namespace std;
int main () {
    int A=0, B=0;
    for (int i=1;i<=9;i++)
        {
        int j;
        cin >> j;
        if (i==1)
            {
            A=j;
            B=i;
            }
        else
            {
            if (j>A)
                {
                A=j;
                B=i;
                }
            }
        }
    cout << A << "\n" << B;
    return 0;
    }