#include <iostream>
using namespace std;
int main () {
    int A=0, B=100;
    for (int i=1;i<=7;i++)
        {
        int N;
        cin >> N;
        if (N%2==1)
            {
            A+=N;
            if (B>N)
                {
                B=N;
                }
            }
        }
    if (A==0)
        {
        A=-1;
        cout << A;
        }
    else 
        {
        cout << A << endl << B;
        }
    return 0;
    }