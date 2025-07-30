#include <iostream>
using namespace std;
int main () {
    int N, A, B, a, b, x=0, y=0;
    cin >> N >> A >> B >> a >> b;
    if (A%a==0)
    x=A/a;
    else
    x=A/a+1;
    if (B%b==0)
    y=B/b;
    else
    y=B/b+1;
    if (x>=y)
    cout << N-x;
    else
    cout << N-y;
    return 0;
    }