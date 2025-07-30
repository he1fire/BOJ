#include <iostream>
using namespace std;
int main () {
    while (1)
        {
        int x, y, f=0, m=0;
        cin >> x >> y;
        if (x==0 && y==0)
        break;
        if (x>y)
        for (int i=1;i*y<=x;i++)
            {
            if (i*y==x)
            m++;
            }
        else
        for (int i=1;i*x<=y;i++)
            {
            if (i*x==y)
            f++;
            }
        if (f==1)
        cout << "factor\n";
        else if (m==1)
        cout << "multiple\n";
        else
        cout << "neither\n";
        }
    return 0;
    }