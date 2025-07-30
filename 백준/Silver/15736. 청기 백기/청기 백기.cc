#include <iostream>
using namespace std;
int main () {
    int N, M=1;
    cin >> N;
    for (M=1;M*M<=N;M++);
    cout << M-1;
    return 0;
    }