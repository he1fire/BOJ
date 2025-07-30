#include <iostream>
using namespace std;
int main () {
    int N, M, n, m, x=0, y=0;
    cin >> N >> M;
    for (int i=1;i<=N;i++)
        {
        cin >> n;
        if (x<n)
        x=n;
        }
    for (int j=1;j<=M;j++)
        {
        cin >> m;
        if (y<m)
        y=m;
        }
    cout << x+y;
    return 0;
    }