#include <iostream>
using namespace std;
int main () {
    int N[5], M=0;
    for (int i=0;i<5;i++)
        {
        cin >> N[i];
        M+=N[i];
        }
    cout << M;
    return 0;
    }