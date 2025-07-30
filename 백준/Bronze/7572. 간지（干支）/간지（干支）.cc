#include <iostream>
using namespace std;
int main () {
    int N;
    cin >> N;
    cout << (char)(65+(8+N)%12) << (6+N)%10;
    return 0;
    }