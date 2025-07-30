#include <iostream>
using namespace std;
int main () {
    int N, a=0, b=0;
    cin >> N;
    a=N/2;
    b=N/2+N%2;
    cout << (a+1)*(b+1);
    return 0;
    }