#include <iostream>
using namespace std;
int main () {
    int N;
    cin >> N;
    for (int i=1;i<=N;i++)
        {
        char x[101]={0, }, y[101]={0, };
        int A=0;
        cin >> x >> y;
        for (int j=0;x[j]!=0;j++)
            {
            if (x[j]!=y[j])
            A++;
            }
        cout << "Hamming distance is " << A << ".\n";
        }
    return 0;
    }