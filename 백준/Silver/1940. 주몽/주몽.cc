#include <iostream>
using namespace std;
int main () {
    int N, M, A[15000]={0, }, B=0;
    cin >> N >> M;
    for (int i=0;i<N;i++)
    cin >> A[i];
    for (int i=0;i<N;i++)
        {
        for (int j=i+1;j<N;j++)
            {
            if (A[i]+A[j]==M)
            B++;
            }
        }
    cout << B;
    return 0;
    }