#include <iostream>
#include <stdio.h>
using namespace std;
int main () {
    int N;
    double A[5]={350.34, 230.90, 190.55, 125.30, 180.90}, M=0;
    cin >> N;
    for (int i=1;i<=N;i++)
        {
        M=0;
        int B[5];
        for (int j=0;j<5;j++)
            {
            cin >> B[j];
            M+=A[j]*B[j];
            }
        cout << "$";
        printf ("%.2f\n", M);
        }
    return 0;
    }