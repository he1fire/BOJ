#include <iostream>
using namespace std;
int f(int x) {
    if (x==0)
    return 0;
    return (x%10)+f(x/10);
    }
int main () {
    int N[10001]={0, };
    for (int j=1;j<10001;j++)
        {
        if (j+f(j)<10001)
        N[j+f(j)]=1;
        }
    for (int k=1;k<10001;k++)
        {
        if (N[k]==0)
        cout << k << "\n";
        }
    return 0;
    }