#include <iostream>
using namespace std;
int main () {
    int a, b, c, x, N[10]={0, };
    cin >> a >> b >> c;
    x=a*b*c;
    for (int i=x;i>0;i/=10)
    N[i%10]++;
    for (int i=0;i<10;i++)
    cout << N[i] << "\n";
    return 0;
    }