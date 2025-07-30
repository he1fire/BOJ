#include <iostream>
using namespace std;
int main () {
    int N, y=0;
    cin >> N;
    for (int i=1;i<=N;i++)
        {
        int M, x=1;
        cin >> M;
        for (int j=2;j*j<=M;j++)
            {
            if (M%j==0)
                {
                x=0;
                break;
                }
            }
        if (M==1)
        x=0;
        if (x)
        y++;
        }
    cout << y;
    return 0;
    }