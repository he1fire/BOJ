#include <iostream>
using namespace std;
int main () {
    int A, B, C, D;
    for (int i=1;i<=3;i++)
        {
        cin >> A >> B >> C >> D;
        if (A+B+C+D==0)
        cout << "D\n";
        else if (A+B+C+D==1)
        cout << "C\n";
        else if (A+B+C+D==2)
        cout << "B\n";
        else if (A+B+C+D==3)
        cout << "A\n";
        else
        cout << "E\n";
        }
    return 0;
    }