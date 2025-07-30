#include <iostream>
using namespace std;
int main () {
    int x=0,y=0;
    int A, B, C, D, E;
    cin >> A >> B >> C >> D >> E;
    if (A<=B && A<=C) 
        {
        x=A;
        }
    else if (B<=A && B<=C) 
        {
        x=B;
        }
    else
        {
        x=C;
        }
    if (D<=E) 
        {
        y=D;
        }
    else
        {
        y=E;
        }
    cout << x+y-50;
    return 0;
    }