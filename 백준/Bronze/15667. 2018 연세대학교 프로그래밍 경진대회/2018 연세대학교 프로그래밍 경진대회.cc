#include <iostream>
using namespace std;
int main () {
    int N, M=0;
    cin >> N;
    for (M=1;1+M+M*M!=N;M++);
    cout << M;
    return 0;
    }