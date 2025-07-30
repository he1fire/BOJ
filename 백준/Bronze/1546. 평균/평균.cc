#include <iostream>
using namespace std;
int main () {
    int x;
    cin >> x;
    double N[x-1], A=0, B=0;
    for (int i=0;i<x;i++)
        {
        cin >> N[i];
        if (A<N[i])
        A=N[i];
        }
    for (int i=0;i<x;i++)
        {
        N[i]=N[i]/A*100;
        B+=N[i];
        }
    cout << B/x;
    return 0;
    }