#include <iostream>
using namespace std;
int main () {
    int N, M=0;
    cin >> N;
    for (int i=1;i<=N+1;i++)
    M+=i;
    cout << M*N;
    return 0;
    }