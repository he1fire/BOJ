#include <iostream>
#include <string>
using namespace std;
int f(char x) {
    if (x=='a' || x=='e' || x=='i' || x=='o' || x=='u' || x=='A' || x=='E' || x=='I' || x=='O' || x=='U')
    return 1;
    else
    return 0;
    }
int g(char x) {
    if (x!='.' && x!='?' && x!='!')
    return 1;
    else
    return 0;
    }
int main () {
    while (1)
        {
        int N=0;
        char M='a';
        while (g(M))
            {
            string x;
            cin >> x;
            if (x[0]=='#')
            return 0;
            for (int i=0;i<x.size();i++)
                {
                if (f(x[i]))
                N++;
                M=x[i];
                }
            }
        cout << N << "\n";
        }
    return 0;
    }