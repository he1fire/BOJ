#include <iostream>
using namespace std;
int main () {
    int N;
    cin >> N;
    for (int i=1;i<=N;i++)
        {
        int M, x[31];
        x[1]=1;
        cin >> M;
        for (int j=2;j<=M;j++)
        x[j]=x[j-1]*2+1;
        cout << x[M] << "\n";
        }
    return 0;
    }