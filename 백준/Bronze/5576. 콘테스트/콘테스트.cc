#include <iostream>
#include <algorithm>
using namespace std;
int main () {
    int N[10], M[10];
    for (int i=0;i<10;i++)
    cin >> N[i];
    for (int j=0;j<10;j++)
    cin >> M[j];
    sort (N, N+10, greater<int>());
    sort (M, M+10, greater<int>());
    cout << N[0]+N[1]+N[2] << " ";
    cout << M[0]+M[1]+M[2];
    return 0;
    }