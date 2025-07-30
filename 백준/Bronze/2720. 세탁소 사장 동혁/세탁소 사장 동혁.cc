#include <iostream>
using namespace std;
int main () {
    int N, M;
    cin >> N;
    for (int i=1;i<=N;i++)
        {
        int a, b, c, d;
        cin >> M;
        a=M/25;
        M%=25;
        b=M/10;
        M%=10;
        c=M/5;
        M%=5;
        d=M;
        cout << a << " " << b << " " << c << " " << d << "\n";
        }
    return 0;
    }