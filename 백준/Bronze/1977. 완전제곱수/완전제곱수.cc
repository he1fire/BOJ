#include <iostream>
using namespace std;
int main () {
    int N, M, x=0, y=0;
    cin >> N >> M;
    for (int i=100;i>=1;i--)
        {
        if (N<=i*i && i*i<=M)
            {
            y=i*i;
            x+=i*i;
            }
        }
    if (x==0)
    cout << "-1";
    else
    cout << x << "\n" << y;
    return 0;
    }