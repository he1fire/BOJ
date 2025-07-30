#include <iostream>
using namespace std;
int main () {
    int N;
    cin >> N;
    for (int i=1;i<=N;i++)
        {
        long long M, x[68];
        cin >> M;
        x[0]=1;
        x[1]=1;
        x[2]=2;
        x[3]=4;
        for (int j=4;j<=M;j++)
        x[j]=x[j-1]+x[j-2]+x[j-3]+x[j-4];
        cout << x[M] << "\n";
        } 
    return 0;
    }