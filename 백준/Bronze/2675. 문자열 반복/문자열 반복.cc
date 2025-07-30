#include <iostream>
using namespace std;
int main () {
    int T, N, x, y;
    char M[21]={0, };
    cin >> T;
    for (int i=1;i<=T;i++)
        {
        cin >> N >> M;
        for (int j=0;M[j]!=0;j++)
            {
            for (int k=0;k<=N-1;k++)
            cout << M[j];
            }
        cout << "\n";
        }
    return 0;
    }