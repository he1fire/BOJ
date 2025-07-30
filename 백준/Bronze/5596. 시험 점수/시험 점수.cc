#include <iostream>
using namespace std;
int main () {
    int x=0;
    for (int i=1;i<=2;i++)
        {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        if (x<=a+b+c+d)
        x=a+b+c+d;
        }
    cout << x;
    return 0;
    }