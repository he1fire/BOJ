#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main () {
    int N, x[501][501]={0, }, y[501][501]={0, }, ans=0;
    cin >> N;
    for (int i=1;i<=N;i++)
        {
        for (int j=1;j<=i;j++)
        cin >> x[i][j];
        }
    for (int i=1;i<=N;i++)
        {
        for (int j=1;j<=i;j++)
        y[i][j]=max(y[i-1][j],y[i-1][j-1])+x[i][j];
        }
    for (int i=1;i<=N;i++)
    ans=max(ans,y[N][i]);
    cout << ans;
    return 0;
    }