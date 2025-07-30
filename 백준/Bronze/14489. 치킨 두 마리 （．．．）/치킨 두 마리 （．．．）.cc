#include <iostream>
using namespace std;
int main () {
    int a, b, c;
    cin >> a >> b >> c;
    a+b>=c*2 ? cout << a+b-c*2 : cout << a+b;
    return 0;
}