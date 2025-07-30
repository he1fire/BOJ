#include <iostream>
using namespace std;
int main () {
    for (int i=1;1;i++)
        {
        int a, b, cnt=0;
        string x;
        cin >> a >> x >> b;
        if (x=="E")
        break;
        else if (x==">" && a>b)
        cnt=1;
        else if (x==">=" && a>=b)
        cnt=1;
        else if (x=="<" && a<b)
        cnt=1;
        else if (x=="<=" && a<=b)
        cnt=1;
        else if (x=="==" && a==b)
        cnt=1;
        else if (x=="!=" && a!=b)
        cnt=1;
        cout << "Case " << i << ": ";
        cnt==1 ? cout << "true\n" : cout << "false\n";
        }
    return 0;
    }