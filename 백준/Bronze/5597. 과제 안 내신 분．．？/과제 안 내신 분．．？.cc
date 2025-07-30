#include <iostream>
using namespace std;
int main () {
    int N[31], M[31], x;
    for (int i=1;i<=30;i++)
    M[i]=i;
    for (int i=1;i<=28;i++)
    cin >> N[i];
    for (int i=1;i<=28;i++)
        {
        for (int j=1;j<=30;j++)
            {
            if (N[i]==M[j])
            M[j]=0;
            }
        }
    for (int i=1;i<=30;i++)
        {
        if (M[i]!=0)
        cout << M[i] << "\n";
        }
    return 0;
    }