#include <iostream>
using namespace std;
int main () {
    int N, M;
    cin >> N;
    if (N==1 || N==3)
    cout << "-1";
    else
        {
        for (M=0;N%5!=0;M++)
        N-=2;
        cout << M+N/5;
        }
    return 0;
    }