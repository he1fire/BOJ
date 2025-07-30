#include <iostream>
using namespace std;
int main () {
    char N[101]={0, };
    int M=1;
    cin >> N;
    for (int i=0;N[i]!=0;i++)
        {
        if (N[i]==',')
        M++;
        }
    cout << M;
    return 0;
    }