#include <iostream>
using namespace std;
int main () {
    int N, A=100, B=100;
    cin >> N;
    for (int i=1;i<=N;i++)
        {
        int a, b;
        cin >> a >> b;
        if (a>b)
        B-=a;
        else if (b>a)
        A-=b;
        }
    cout << A << "\n" << B;
    return 0;
    }