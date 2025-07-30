#include <iostream>
using namespace std;
int main () {
    int N;
    cin >> N;
    for (int i=1;i<=N;i++)
        {
        long long M, x[101];
        x[0]=0;
        x[1]=1;
        x[2]=1;
        x[3]=1;
        x[4]=2;
        cin >> M;
        for (int j=5;j<=M;j++)
        x[j]=x[j-1]+x[j-5];
        cout << x[M] << "\n";
        }
    return 0;
    }