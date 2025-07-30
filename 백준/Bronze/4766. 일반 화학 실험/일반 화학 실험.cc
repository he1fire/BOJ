#include <iostream>
#include <stdio.h>
using namespace std;
int main () {
    double x=0, y=0;
    cin >> x;
    while (1)
        {
        cin >> y;
        if (y==999)
        break;
        printf ("%.2f\n", y-x);
        x=y;
        }
    return 0;
    }