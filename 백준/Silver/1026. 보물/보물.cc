#include <iostream>
using namespace std;
int main () {
    int N, M=0, x=0;
    cin >> N;
    int A[N];
    for (int i=0;i<N;i++)
    cin >> A[i];
    for (int j=0;j<N;j++)
        {
        for (int k=0;k<N-j-1;k++)
            {
            if (A[k]>A[k+1])
                {
                M=A[k];
                A[k]=A[k+1];
                A[k+1]=M;
                }
            }
        }
    int B[N];
    for (int i=0;i<N;i++)
    cin >> B[i];
    for (int j=0;j<N;j++)
        {
        for (int k=0;k<N-j-1;k++)
            {
            if (B[k]<B[k+1])
                {
                M=B[k];
                B[k]=B[k+1];
                B[k+1]=M;
                }
            }
        }
    for (int i=0;i<N;i++)
    x+=A[i]*B[i];
    cout << x;
    return 0;
    }