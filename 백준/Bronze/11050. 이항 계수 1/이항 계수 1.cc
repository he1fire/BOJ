#include <iostream>
using namespace std;
int main () {
    int N, R, x=1;
    cin >> N >> R;
    for (int i=N;i>N-R;i--)
    x*=i;
    for (int j=1;j<=R;j++)
    x/=j;
    cout << x;
    return 0;
    }