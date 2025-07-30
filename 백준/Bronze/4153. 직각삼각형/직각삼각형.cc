#include <iostream>
#include <algorithm>
using namespace std;
int main () {
    while (1)
        {
        int A[3];
        for (int i=0;i<3;i++)
        cin >> A[i];
        if (A[0]==0 && A[1]==0 && A[2]==0)
        break;
        sort (A, A+3);
        if (A[2]*A[2]==A[0]*A[0]+A[1]*A[1])
        cout << "right\n";
        else
        cout << "wrong\n";
        }
    return 0;
    }