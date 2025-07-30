#include <iostream>
using namespace std;
int main () {
    int N=0, A[4];
    for (int i=0;i<4;i++)
    cin >> A[i];
    for (int j=0;j<4;j++)
        {
        for (int k=0;k<4;k++)
            {
            if (A[k]>A[k+1])
                {
                N=A[k];
                A[k]=A[k+1];
                A[k+1]=N;
                }
            }
        }
    cout << A[0]*A[2];
    return 0;
    }