#include <iostream>
using namespace std;
int main () {
    char N[9][9];
    int M=0;
    for (int i=1;i<=8;i++)
        {
        for (int j=1;j<=8;j++)
            {
            cin >> N[i][j];
            if (N[i][j]=='F')
                {
                if (i%2==1 && j%2==1)
                M++;
                else if (i%2==0 && j%2==0)
                M++;
                }
            }
        }
    cout << M;
    return 0;
    }