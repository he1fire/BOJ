#include <iostream>
using namespace std;
int main () {
    int N, M, A, x[301][301]={0, };
    cin >> N >> M;
    for (int i=0;i<N;i++)
        {
        for (int j=0;j<M;j++)
        cin >> x[i][j];
        }
    cin >> A;
    for (int i=1;i<=A;i++)
        {
        int x1, y1, x2, y2, ans=0;
        cin >> x1 >> y1 >> x2 >> y2;
        for (int j=x1-1;j<x2;j++)
            {
            for (int k=y1-1;k<y2;k++)
            ans+=x[j][k];
            }
        cout << ans << "\n";
        }
    return 0;
    }