#include <iostream>
using namespace std;
int main () {
    int A, B, C, N=0;
    cin >> A >> B >> C;
    if (A==15)
        {
        A=0;
        }
    if (B==28)
        {
        B=0;
        }
    if (C==19)
        {
        C=0;
        }
    for(int i=1;1;i++)
        {
        if (i%15==A)
            {
            if (i%28==B)
                {
                if (i%19==C)
                    {
                    N=i;
                    break;
                    }
                }
            }
        }
    cout << N;
    return 0;
    }