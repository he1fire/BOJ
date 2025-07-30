#include <iostream>
using namespace std;
int main () {
    for (int i=1;i<=3;i++)
        {
        int a, b, c, A, B, C, x=0, y=0, z=0;
        cin >> a >> b >> c >> A >> B >> C;
        x=A-a;
        y=B-b;
        z=C-c;
        if (z<0)
            {
            z+=60;
            y--;
            }
        if (y<0)
            {
            y+=60;
            x--;
            }
        cout << x << " " << y << " " << z << "\n";
        }
    return 0;
    }