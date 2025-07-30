#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main () {
    vector<int> x;
    x.push_back(-9999);
    int N;
    cin >> N;
    for (int i=0;i<N;i++)
        {
        int a;
        cin >> a;
        x.push_back(a);
        }
    sort(x.begin(),x.end());
    for (int i=1;i<x.size();i++)
        {
        if (x[i]!=x[i-1])
        cout << x[i] << " ";
        }
    return 0;
    }