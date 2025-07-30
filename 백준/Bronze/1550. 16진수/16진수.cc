#include <iostream>
#include <string>
using namespace std;
int main () {
    string x;
    int a=1, ans=0;
    cin >> x;
    for (int i=x.size()-1;i>=0;i--)
        {
        if (x[i]<=57)
        ans+=a*(x[i]-48);
        else
        ans+=a*(x[i]-55);
        a*=16;
        }
    cout << ans;
    return 0;
    }