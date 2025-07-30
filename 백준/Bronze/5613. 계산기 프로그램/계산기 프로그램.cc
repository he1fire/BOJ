#include <iostream>
using namespace std;
int main () {
    int ans=0;
    char x;
    for (int i=0;1;i++)
        {
        int a;
        char b;
        cin >> a >> b;
        if (i==0)
        ans=a;
        else
            {
            if (x=='+')
            ans+=a;
            else if (x=='-')
            ans-=a;
            else if (x=='*')
            ans*=a;
            else
            ans/=a;
            }
        x=b;
        if  (x=='=')
        break;
        }
    cout << ans;
    return 0;
    }