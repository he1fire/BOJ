#include <iostream>
using namespace std;
int main () {
    char x[5][15]={0, };
    for (int i=0;i<5;i++)
    cin >> x[i];
    for (int i=0;i<15;i++)
        {
        for (int j=0;j<5;j++)
            {
            if (x[j][i]!=NULL)
            cout << x[j][i];
            }
        }
    return 0;
    }