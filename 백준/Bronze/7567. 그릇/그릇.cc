#include <iostream>
using namespace std;
int main () {
    char N[50]={0, };
    int M=10;
    cin >> N;
    for (int i=1;N[i]!=0;i++)
        {
        if (N[i-1]==N[i])
        M+=5;
        else
        M+=10;
        }
    cout << M;
    return 0;
    }