#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main () {
    vector<int> x;
    for (int i=1;i<=20;i++)
    x.push_back(i);
    for (int i=0;i<10;i++)
        {
        int a, b;
        cin >> a >> b;
        reverse(x.begin()+a-1,x.begin()+b);
        }
    for (int i=0;i<20;i++)
    cout << x[i] << " ";
    return 0;
    }