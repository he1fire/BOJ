#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main () {
    vector<int> x, y;
    for (int i=1;i<=5;i++)
        {
        int a;
        cin >> a;
        x.push_back(a);
        }
    y=x;
    sort(y.begin(),y.end());
    while (x!=y)
        {
        for (int i=1;i<=4;i++)
            {
            if (x[i-1]>x[i])
                {
                swap(x[i],x[i-1]);
                for (int j=0;j<=4;j++)
                cout << x[j] << " ";
                cout << "\n";
                }
            }
        }
    return 0;
    }