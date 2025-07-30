#include <iostream>
using namespace std;
int main () {
    int M=0;
    for (int i=1;i<=4;i++)
        {
        int N;
        cin >> N;
        M+=N;
        }
    cout << M/60 << "\n" << M%60;
    return 0;
    }