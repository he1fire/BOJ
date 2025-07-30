#include <iostream>
using namespace std;
int main () {
    int N, M=1;
    cin >> N;
    for (int i=1;i<=N;i++)
    M*=i;
    cout << M;
    return 0;
    }