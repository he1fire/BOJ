#include <iostream>
using namespace std;
int main () {
    int r, w,l;
    for (int i=1;1;i++)
        {
        cin >> r >> w >> l;
        if (r==0)
        break;
        else if (4*r*r>=w*w+l*l)
        cout << "Pizza " << i << " fits on the table.\n";
        else
        cout << "Pizza " << i << " does not fit on the table.\n";
        }
    return 0;
    }