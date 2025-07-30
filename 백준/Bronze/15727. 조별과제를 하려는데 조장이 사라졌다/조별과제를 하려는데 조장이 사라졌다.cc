#include <iostream>
using namespace std;
int main () {
    int N;
    cin >> N;
    N%5==0 ? cout << N/5 : cout << N/5+1;
    return 0;
    }