#include <iostream>
using namespace std;
int main () {
    int x=0;
    char A[101];
    cin >> A;
    for (x=0;A[x]!=0;x++);
    cout << x;
    return 0;
    }