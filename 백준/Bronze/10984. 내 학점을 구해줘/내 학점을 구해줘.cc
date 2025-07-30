#include <iostream>
#include <stdio.h>
using namespace std;
int main () {
    int M;
    cin >> M;
    for (int i=1;i<=M;i++)
        {
        int N;
        double A, B, x=0, y=0;
        cin >> N;
        for (int j=1;j<=N;j++)
            {
            cin >> A >> B;
            x+=A;
            y+=A*B;
            }
        cout << x << " ";
        printf ("%.1f\n", y/x);
        }
    return 0;
    }