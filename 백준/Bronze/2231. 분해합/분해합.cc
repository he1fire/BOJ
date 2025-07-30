#include <iostream>
using namespace std;
int f(int x) {
    int y=x;
    while (x)
        {
        y+=(x%10);
        x/=10;
        }
    return y;
    }
int main () {
    int N, M=0;
    cin >> N;
    for (int i=1;i<=N;i++)
        {
        if (f(i)==N)
            {
            M=i;
            break;
            }
        }
    cout << M;
    return 0;
    }