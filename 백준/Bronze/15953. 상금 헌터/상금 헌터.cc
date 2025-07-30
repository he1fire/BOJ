#include <iostream>
#include <vector>
using namespace std;
int main () {
    vector<int> x, y;
    for (int i=0;i<=100;i++)
        {
        if (i==0)
        x.push_back(0);
        else if (i<=1)
        x.push_back(5000000);
        else if (i<=3)
        x.push_back(3000000);
        else if (i<=6)
        x.push_back(2000000);
        else if (i<=10)
        x.push_back(500000);
        else if (i<=15)
        x.push_back(300000);
        else if (i<=21)
        x.push_back(100000);
        else
        x.push_back(0);
        }
    for (int i=0;i<=64;i++)
        {
        if (i==0)
        y.push_back(0);
        else if (i<=1)
        y.push_back(5120000);
        else if (i<=3)
        y.push_back(2560000);
        else if (i<=7)
        y.push_back(1280000);
        else if (i<=15)
        y.push_back(640000);
        else if (i<=31)
        y.push_back(320000);
        else
        y.push_back(0);
        }
    int N;
    cin >> N;
    for (int i=0;i<N;i++)
        {
        int a, b;
        cin >> a >> b;
        cout << x[a]+y[b] << "\n";
        }
    return 0;
    }