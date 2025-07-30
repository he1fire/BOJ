#include <iostream>
using namespace std;
int main () {
    char x[101][101]={0, };
    int N, M, y[101][101]={0, };
    cin >> N >> M;
    for (int i=0;i<N;i++)
        {
        cin >> x[i];
        }
    for (int i=0;i<N;i++)
        {
        bool A=0;
        for (int j=0;j<M;j++)
            {
            if (x[i][j]=='c')
            A=1;
            else if (A)
            y[i][j]=y[i][j-1]+1;
            else
            y[i][j]=-1;
            }
        }
    for (int i=0;i<N;i++)
        {
        for (int j=0;j<M;j++)
        cout << y[i][j] << " ";
        cout << "\n";
        }
    return 0;
    }