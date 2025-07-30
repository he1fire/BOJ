#include <iostream>
#include <algorithm>
using namespace std;
int main () {
    int N[4], M[2];
    for (int i=0;i<4;i++)
    cin >> N[i];
    for (int j=0;j<2;j++)
    cin >> M[j];
    sort (N, N+4, greater<int>());
    sort (M, M+2, greater<int>());
    cout << N[0]+N[1]+N[2]+M[0];
    return 0;
    }