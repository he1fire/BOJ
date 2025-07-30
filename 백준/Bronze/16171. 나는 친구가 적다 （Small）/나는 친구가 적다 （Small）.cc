#include <iostream>
#include <string>
using namespace std;
int main () {
    int ans=0;
    string N, x, y;
    cin >> N >> y;
    for (int i=0;i<N.size();i++)
        {
        if (N[i]>64)
        x+=N[i];
        }
    for (int i=y.size();i<=x.size();i++)
        {
        if (y==x.substr(i-y.size(),i))
        ans=1;
        }
    cout << ans;
    return 0;
    }