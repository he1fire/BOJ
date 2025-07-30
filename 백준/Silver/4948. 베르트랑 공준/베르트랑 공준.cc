#include <iostream>
using namespace std;
int main () {
    while (1)
        {
        int N, y=0;
        cin >> N;
        if (N==0)
        break;
        for (int i=N+1;i<=2*N;i++)
            {
            int x=1;
            for (int j=2;j*j<=i;j++)
                {
                if (i%j==0)
                    {
                    x=0;
                    break;
                    }
                }
            if (x)
            y++;
            }
        cout << y << "\n";
        }
    return 0;
    }