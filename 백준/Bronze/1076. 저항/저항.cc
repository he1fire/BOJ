#include <iostream>
#include <string>
using namespace std;
int main () {
    long long ans=0;
    string x[10]={"black", "brown", "red", "orange", "yellow", "green", "blue", "violet", "grey", "white"};
    string A, B, C;
    cin >> A >> B >> C;
    for (int i=0;i<10;i++)
        {
        if (A==x[i])
        ans+=i*10;
        if (B==x[i])
        ans+=i;
        }
    for (int i=0;i<10;i++)
        {
        if (C==x[i])
            {
            for (int j=1;j<=i;j++)
            ans*=10;
            }
        }
    cout << ans;
    return 0;
    }