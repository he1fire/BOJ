#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main () {
    string A, B;
    cin >> A;
    B=A;
    reverse(B.begin(),B.end());
    A==B ? cout << "1" : cout << "0";
    return 0;
    }