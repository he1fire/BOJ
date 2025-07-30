#include <iostream>
using namespace std;
int main () {
    int N;
    cin >> N;
    for (int i=1;i<=N;i++)
        {
        int x[8], a=0, b=0, c=0, d=0;
        for (int j=0;j<8;j++)
        cin >> x[j];
        a=x[0]+x[4];
        b=x[1]+x[5];
        c=x[2]+x[6];
        d=x[3]+x[7];
        if (a<1)
        a=1;
        if (b<1)
        b=1;
        if (c<0)
        c=0;
        cout << a+b*5+c*2+d*2 << "\n";
        }
    return 0;
    }