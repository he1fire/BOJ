#include <iostream>
using namespace std;
int main () {
    int N, x[15][15]={0, };
    for (int i=1;i<=14;i++)
    x[0][i]=i;
    for (int i=1;i<=14;i++)
        {
        for (int j=1;j<=14;j++)
        x[i][j]=x[i-1][j]+x[i][j-1];
        }
    cin >> N;
    for (int i=1;i<=N;i++)
        {
        int k, n;
        cin >> k >> n;
        cout << x[k][n] << "\n";
        }
    return 0;
    }