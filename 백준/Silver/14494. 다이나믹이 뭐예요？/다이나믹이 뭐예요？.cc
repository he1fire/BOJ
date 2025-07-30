#include <iostream>
using namespace std;
int main () {
    long long N, M, x[1002][1002]={0, };
    x[0][0]=1;
    cin >> N >> M;
    for (int i=1;i<=N;i++)
        {
        for (int j=1;j<=M;j++)
            {
            x[i][j]=x[i-1][j]+x[i][j-1]+x[i-1][j-1];
            x[i][j]%=1000000007;
            }
        }
    cout << x[N][M];
    return 0;
    }