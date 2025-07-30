#include <iostream>
using namespace std;
int f(int n) {
    return n>0?n:-n;
    }
int main () {
    int x1, x2, x3, y1, y2, y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    f((x1-x3)*(y1-y2))==f((x1-x2)*(y1-y3)) ? cout << "WHERE IS MY CHICKEN?" : cout << "WINNER WINNER CHICKEN DINNER!";
    return 0;
    }