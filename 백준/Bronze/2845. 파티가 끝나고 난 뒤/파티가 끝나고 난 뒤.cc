#include <iostream>
using namespace std;
int main () {
    int x, y, N[5];
    cin >> x >> y;
    for (int i=0;i<=4;i++)
    cin >> N[i];
    for (int j=0;j<=4;j++)
    cout << N[j]-(x*y) << " ";
    return 0;
    }