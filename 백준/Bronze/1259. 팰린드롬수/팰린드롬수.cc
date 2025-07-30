#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main () {
    while (1)
        {
        string A, B;
        cin >> A;
        if (A=="0")
        break;
        B=A;
        reverse(B.begin(),B.end());
        A==B ? cout << "yes\n" : cout << "no\n";
        }
    return 0;
    }