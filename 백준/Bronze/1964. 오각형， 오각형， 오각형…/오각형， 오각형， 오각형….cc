#include <iostream>
using namespace std;
int main () {
    long long N, M=0;
    cin >> N;
    for (int i=1;i<=N;i++)
    M+=3*i+1;
    cout << (M+1)%45678;
    return 0;
    }