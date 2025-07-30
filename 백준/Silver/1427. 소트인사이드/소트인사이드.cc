#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main () {
    string N;
    cin >> N;
    sort (N.rbegin(),N.rend());
    cout << N;
    return 0;
    }