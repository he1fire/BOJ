#include <iostream>
#include <algorithm>
using namespace std;
int main () {
    int N;
    cin >> N;
    for (int i=1;i<=N;i++)
        {
        int x[5];
        for (int j=0;j<=4;j++)
        cin >> x[j];
        sort (x,x+5);
        if (x[3]-x[1]>=4)
        cout << "KIN\n";
        else
        cout << x[1]+x[2]+x[3] << "\n";
        }
    return 0;
    }