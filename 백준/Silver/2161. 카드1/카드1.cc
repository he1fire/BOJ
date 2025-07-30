#include <iostream>
using namespace std;
int main () {
    int N, M[2000]={0, }, x=0;
    cin >> N;
    x=N+1;
    for (int i=1;i<=N;i++)
    M[i]=i;
    for (int i=1;M[i]!=0;i++)
        {
        if (i%2==1)
        cout << M[i] << " ";
        else
            {
            M[x]=M[i];
            x++;
            }
        }
    return 0;
    }