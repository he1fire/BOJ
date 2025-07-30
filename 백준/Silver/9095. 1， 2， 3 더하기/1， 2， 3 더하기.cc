#include <iostream>
using namespace std;
int main () {
    int N, x[12];
    x[1]=1;
    x[2]=2;
    x[3]=4;
    cin >> N;
    for (int i=1;i<=N;i++)
        {
        int M;
        cin >> M;
        for (int j=4;j<=M;j++)
        x[j]=x[j-1]+x[j-2]+x[j-3];
        cout << x[M] << "\n";
        }
    return 0;
    }