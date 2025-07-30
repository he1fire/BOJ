#include <iostream>
using namespace std;
int main () {
    long long N, x=0;
    cin >> N;
    for (int i=1;i<=N-1;i++)
    x+=(N+1)*i;
    cout << x;
    return 0;
    }