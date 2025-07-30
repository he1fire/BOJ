#include <iostream>
using namespace std;
int main () {
    int x, y, z, nx, ny, nz, a=0, b=0, c=0;
    cin >> x >> y >> z >> nx >> ny >> nz;
    c=nx-x;
    b=c+1;
    if (ny>y || (ny==y && nz>=z))
    a=c;
    else
    a=c-1;
    cout << a << "\n" << b << "\n" << c;
    return 0;
    }