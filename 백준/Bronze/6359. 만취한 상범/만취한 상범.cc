#include <iostream>
using namespace std;
int main () {
    int N;
    cin >> N;
    for (int i=1;i<=N;i++)
        {
        int M, x[1000]={0, }, y=0;
        cin >> M;
        for (int j=1;j<=M;j++)
            {
            for (int k=1;k<=M;k++)
                {
                if (k%j==0)
                    {
                    if (x[k]==0)
                    x[k]=1;
                    else
                    x[k]=0;
                    }
                }
            }
        for (int j=1;j<=M;j++)
            {
            if (x[j]==1)
            y++;
            }
        cout << y << "\n";
        }
    return 0;
    }