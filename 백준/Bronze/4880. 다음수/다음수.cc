#include <iostream>
using namespace std;
int main () {
    while (1)
        {
        double a, b, c;
        cin >> a >> b >> c;
        if (a==0 && b==0 && c==0)
        break;
        if (a+c==b*2)
        cout << "AP " << c+b-a;
        else if (c>a)
        cout << "GP " << c*(b/a);
        else
        cout << "GP " << c/(a/b);
        cout << "\n";
        }
    return 0;
    }