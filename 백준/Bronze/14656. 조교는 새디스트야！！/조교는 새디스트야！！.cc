#include <iostream>
using namespace std;
int main () {
    int N, M=0;
    cin >> N;
    for (int i=1;i<=N;i++)
        {
        int x;
        cin >> x;
        if (x!=i)
        M++;
        }
    cout << M;
    return 0;
    }