#include <iostream>
using namespace std;
int main () {
    char x[101];
    int N, M=0;
    cin >> N >> x;
    for (int i=0;i<N;i++)
    M+=x[i]-64;
    cout << M;
    return 0;
    }