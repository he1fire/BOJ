#include <iostream>
using namespace std;
int main () {
    int N;
    cin >> N;
    for (int i=1;i<=N;i++)
        {
        int A;
        cin >> A;
        int B[A];
        double C=0, x=0;
        for (int j=0;j<A;j++)
            {
            cin >> B[j];
            C+=B[j];
            }
        for (int k=0;k<A;k++)
            {
            if (B[k]>C/A)
            x++;
            }
        cout << x/A*100 << "%\n";
        }
    return 0;
    }