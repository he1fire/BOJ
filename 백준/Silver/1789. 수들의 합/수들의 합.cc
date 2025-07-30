#include <iostream>
using namespace std;
int main () {
    long long N, M;
    cin >> N;
    for (M=1;M*(M+1)/2<=N;M++); 
    cout << M-1;
    return 0;
    }