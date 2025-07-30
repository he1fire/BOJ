#include <iostream>
using namespace std;
int main () {
    int N, M=0, x[101][101]={0, };
    cin >> N;
    for (int i=1;i<=N;i++)
        {
        int A, B;
        cin >> A >> B;
        for (int j=B;j<B+10;j++)
            {
            for (int k=A;k<A+10;k++)
            x[j][k]=1;
            }
        }
    for (int i=0;i<=100;i++)
        {
            for (int j=0;j<=100;j++)
            {
            if (x[i][j])
            M++;
            }
        }
    cout << M;
    return 0;
    }