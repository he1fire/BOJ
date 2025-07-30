#include <iostream>
using namespace std;
int main () {
    int N, M, K, i, j;
    cin >> N >> M >> K;
    i=K/M;
    j=K%M;
    cout << i << " " << j;
    return 0;
    }