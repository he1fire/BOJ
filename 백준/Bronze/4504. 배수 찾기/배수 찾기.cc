#include <iostream>
using namespace std;
int main () {
    int N;
    cin >> N;
    while (1)
        {
        int x;
        cin >> x;
        if (x==0)
        break;
        if (x%N==0)
        cout << x << " is a multiple of " << N << ".\n";
        else
        cout << x << " is NOT a multiple of " << N << ".\n";
        }
    return 0;
    }