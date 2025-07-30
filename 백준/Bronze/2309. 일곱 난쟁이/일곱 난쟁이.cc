#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main () {
    vector<int> x;
    int y=0;
    for (int i=1;i<=9;i++)
        {
        int N;
        cin >> N;
        y+=N;
        x.push_back(N);
        }
    for (int i=0;i<=7;i++)
        {
        for (int j=i+1;j<=8;j++)
            {
            if (y-(x[i]+x[j])==100)
                {
                x[i]=100;
                x[j]=100;
                break;
                }
            }
        if (x[i]==100)
        break;
        }
    sort(x.begin(),x.end());
    for (int i=0;i<=6;i++)
    cout << x[i] << "\n";
    return 0;
    }