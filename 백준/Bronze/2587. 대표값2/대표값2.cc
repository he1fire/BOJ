#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main () {
    vector<int> x;
    int ans=0;
    for (int i=0;i<5;i++)
        {
        int a;
        cin >> a;
        ans+=a;
        x.push_back(a);
        }
    sort (x.begin(),x.end());
    cout << ans/5 << "\n" << x[2];
    return 0;
    }