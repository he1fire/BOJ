#include <iostream>
using namespace std;
int main () {
    int N[6];
    for (int i=0;i<=5;i++)
    cin >> N[i];
    if (N[0]==N[2])
    cout << N[4] << " ";
    else if (N[0]==N[4])
    cout << N[2] << " ";
    else
    cout << N[0] << " ";
    if (N[1]==N[3])
    cout << N[5];
    else if (N[1]==N[5])
    cout << N[3];
    else
    cout << N[1];
    return 0;
    }