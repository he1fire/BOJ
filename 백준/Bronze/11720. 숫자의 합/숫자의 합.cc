#include <iostream>
using namespace std;
int main () {
    int N, x=0;
    char A[101];
    cin >> N >> A;
    for (int i=0;i<N;i++)
        {
        x+=A[i]-'0';
        }
    cout << x;
    return 0;
    }