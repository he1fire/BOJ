#include <iostream>
#include <string>
using namespace std;
int main () {
    string N;
    int M=0;
    cin >> N;
    for (int i=0;i<N.size();i++)
    if (N[0]=='x')
        {
        M++;
        cout << "1";
        break;
        }
    else if (N[0]=='-' && N[1]=='x')
        {
        M++;
        cout << "-1";
        break;
        }
    else if (N[i]=='x')
        {
        M++;
        for (int j=0;j<i;j++)
        cout << N[j];
        }
    if (M==0)
    cout << "0";
    return 0;
    }